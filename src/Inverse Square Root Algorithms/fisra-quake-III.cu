#include <cuda_runtime.h>
#include <math_constants.h>

__device__ float quake3InvSqrt(float x) {
    float xhalf = 0.5f * x;
    int i = *(int*)&x; // store floating-point bits in integer
    i = 0x5f3759df - (i >> 1); // initial guess
    float y = *(float*)&i;
    return y;
}

__global__ void isrKernel(float *x, float *result) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    result[idx] = quake3InvSqrt(x[idx]);
}

int main() {
    float x = 2.0f;
    float *d_x, *d_result;
    cudaMalloc((void**)&d_x, sizeof(float));
    cudaMalloc((void**)&d_result, sizeof(float));

    cudaMemcpy(d_x, &x, sizeof(float), cudaMemcpyHostToDevice);

    int blockSize = 256;
    int numBlocks = 1;
    isrKernel<<<numBlocks, blockSize>>>(d_x, d_result);

    float result;
    cudaMemcpy(&result, d_result, sizeof(float), cudaMemcpyDeviceToHost);

    cudaFree(d_x);
    cudaFree(d_result);

    printf("Quake III Inverse Square Root of %f: %f\n", x, result);

    return 0;
}