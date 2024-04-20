import math
import time


def newton_raphson_inv_sqrt(x, iterations):
    y = x
    for _ in range(iterations):
        y = y * (1.5 - (x * 0.5 * y * y))
    return y


x = 2.0
iterations = 5
start_time = time.time()
result = newton_raphson_inv_sqrt(x, iterations)
end_time = time.time()

print(f"Newton-Raphson Inverse Square Root of {x}: {result}")
print(f"Execution time: {(end_time - start_time) * 1e6:.2f} microseconds")
