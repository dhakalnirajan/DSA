import numpy as np
import time


def simd_inv_sqrt(x):
    xmm_x = np.float32(x)
    xmm_half = np.float32(0.5)
    xmm_threehalfs = np.float32(1.5)
    xmm_y = np.reciprocal(np.sqrt(xmm_x))
    xmm_y = xmm_y * xmm_threehalfs
    xmm_y = xmm_y - (xmm_x * xmm_y * xmm_y)
    return xmm_y


x = 2.0
start_time = time.time()
result = simd_inv_sqrt(x)
end_time = time.time()

print(f"SIMD-optimized Inverse Square Root of {x}: {result}")
print(f"Execution time: {(end_time - start_time) * 1e6:.2f} microseconds")
