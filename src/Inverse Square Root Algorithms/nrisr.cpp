#include <cmath>
#include <iostream>
#include <chrono>

float newtonRaphsonInvSqrt(float x, int iterations) {
    float y = x;
    for (int i = 0; i < iterations; i++) {
        y = y * (1.5f - (x * 0.5f * y * y));
    }
    return y;
}

int main() {
    float x = 2.0f;
    int iterations = 5;
    auto start = std::chrono::high_resolution_clock::now();
    float result = newtonRaphsonInvSqrt(x, iterations);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Newton-Raphson Inverse Square Root of " << x << ": " << result << std::endl;
    std::cout << "Execution time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " microseconds" << std::endl;

    return 0;
}