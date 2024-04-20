#include <x86intrin.h>
#include <stdio.h>
#include <time.h>

float simdInvSqrt(float x) {
    __m128 xmm_x = _mm_set_ss(x);
    __m128 xmm_half = _mm_set_ss(0.5f);
    __m128 xmm_threehalfs = _mm_set_ss(1.5f);
    __m128 xmm_y = _mm_rsqrt_ss(xmm_x);
    xmm_y = _mm_mul_ss(xmm_y, xmm_threehalfs);
    xmm_y = _mm_sub_ss(xmm_y, _mm_mul_ss(xmm_x, _mm_mul_ss(xmm_y, xmm_y)));
    return _mm_cvtss_f32(xmm_y);
}

int main() {
    float x = 2.0f;
    clock_t start, end;
    float result;

    start = clock();
    result = simdInvSqrt(x);
    end = clock();

    printf("SIMD-optimized Inverse Square Root of %f: %f\n", x, result);
    printf("Execution time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}