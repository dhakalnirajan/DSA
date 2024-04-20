#include <cuda_runtime.h>
#include <math_constants.h>

__global__ void gpuIsrKernel(float *x, float *result) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    result[idx] = rsqrtf(x[idx]);
}

int main() {
    float x = 2.0f;
    float *d_x, *d_result;
    cudaMalloc((void**)&d_x, sizeof(float));
    cudaMalloc((void**)&d_result, sizeof(float));

    cudaMemcpy(d_x, &x, sizeof(float), cudaMemcpyHostToDevice);

    int blockSize = 256;
    int numBlocks = 1;
    gpuIsrKernel<<<numBlocks, blockSize>>>(d_x, d_result);

    float result;
    cudaMemcpy(&result, d_result, sizeof(float), cudaMemcpyDeviceToHost);

    cudaFree(d_x);
    cudaFree(d_result);

    printf("GPU-optimized Inverse Square Root of %f: %f\n", x, result);

    return 0;
}