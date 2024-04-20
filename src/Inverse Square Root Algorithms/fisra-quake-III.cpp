#include <cmath>
#include <iostream>
#include <chrono>

float quake3InvSqrt(float x) {
    float xhalf = 0.5f * x;
    int i = *(int*)&x; // store floating-point bits in integer
    i = 0x5f3759df - (i >> 1); // initial guess
    float y = *(float*)&i;
    return y;
}

int main() {
    float x = 2.0f;
    auto start = std::chrono::high_resolution_clock::now();
    float result = quake3InvSqrt(x);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Quake III Inverse Square Root of " << x << ": " << result << std::endl;
    std::cout << "Execution time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " microseconds" << std::endl;

    return 0;
}