#include <cuda_runtime.h>
#include <math_constants.h>

__device__ float newtonRaphsonInvSqrt(float x, int iterations) {
    float y = x;
    for (int i = 0; i < iterations; i++) {
        y = y * (1.5f - (x * 0.5f * y * y));
    }
    return y;
}

__global__ void isrKernel(float *x, float *result, int iterations) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    result[idx] = newtonRaphsonInvSqrt(x[idx], iterations);
}

int main() {
    float x = 2.0f;
    int iterations = 5;
    float *d_x, *d_result;
    cudaMalloc((void**)&d_x, sizeof(float));
    cudaMalloc((void**)&d_result, sizeof(float));

    cudaMemcpy(d_x, &x, sizeof(float), cudaMemcpyHostToDevice);

    int blockSize = 256;
    int numBlocks = 1;
    isrKernel<<<numBlocks, blockSize>>>(d_x, d_result, iterations);

    float result;
    cudaMemcpy(&result, d_result, sizeof(float), cudaMemcpyDeviceToHost);

    cudaFree(d_x);
    cudaFree(d_result);

    printf("Newton-Raphson Inverse Square Root of %f: %f\n", x, result);

    return 0;
}