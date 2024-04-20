#include <math.h>
#include <stdio.h>
#include <time.h>

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
    clock_t start, end;
    float result;

    start = clock();
    result = newtonRaphsonInvSqrt(x, iterations);
    end = clock();

    printf("Newton-Raphson Inverse Square Root of %f: %f\n", x, result);
    printf("Execution time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}