#include <immintrin.h>
#include <iostream>
#include <chrono>

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
    auto start = std::chrono::high_resolution_clock::now();
    float result = simdInvSqrt(x);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "SIMD-optimized Inverse Square Root of " << x << ": " << result << std::endl;
    std::cout << "Execution time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " microseconds" << std::endl;

    return 0;
}