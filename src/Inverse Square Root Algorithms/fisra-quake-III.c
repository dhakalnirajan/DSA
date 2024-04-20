#include <math.h>
#include <stdio.h>
#include <time.h>

float quake3InvSqrt(float x) {
    float xhalf = 0.5f * x;
    int i = *(int*)&x; // store floating-point bits in integer
    i = 0x5f3759df - (i >> 1); // initial guess
    float y = *(float*)&i;
    return y;
}

int main() {
    float x = 2.0f;
    clock_t start, end;
    float result;

    start = clock();
    result = quake3InvSqrt(x);
    end = clock();

    printf("Quake III Inverse Square Root of %f: %f\n", x, result);
    printf("Execution time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}