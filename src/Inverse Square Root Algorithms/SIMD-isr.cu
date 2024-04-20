#include <cuda_runtime.h>
#include <math_constants.h>

__global__ void simdInvSqrtKernel(float *x, float *result) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    __half hx = __half(x[idx]);
    __half hy = __hrsqrt(hx);
    hy = __hmul(hy, __half(1.5f));
    hy = __hsub(hy, __hmul(hx, __hmul(hy, hy)));
    result[idx] = __half2float(hy);
}

int main() {
    float x = 2.0f;
    float *d_x, *d_result;
    cudaMalloc((void**)&d_x, sizeof(float));
    cudaMalloc((void**)&d_result, sizeof(float));

    cudaMemcpy(d_x, &x, sizeof(float), cudaMemcpyHostToDevice);

    int blockSize = 256;
    int numBlocks = 1;
    simdInvSqrtKernel<<<numBlocks, blockSize>>>(d_x, d_result);

    float result;
    cudaMemcpy(&result, d_result, sizeof(float), cudaMemcpyDeviceToHost);

    cudaFree(d_x);
    cudaFree(d_result);

    printf("SIMD-optimized Inverse Square Root of %f: %f\n", x, result);

    return 0;
}