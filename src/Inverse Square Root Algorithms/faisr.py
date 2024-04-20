import math
import time

def fast_inv_sqrt(x):
    xhalf = 0.5 * x
    i = struct.unpack('<I', struct.pack('<f', x))[0]  # store floating-point bits in integer
    i = 0x5f3759df - (i >> 1)  # initial guess
    y = struct.unpack('<f', struct.pack('<I', i))[0]
    return y * (1.5 - (xhalf * y * y))

x = 2.0
start_time = time.time()
result = fast_inv_sqrt(x)
end_time = time.time()

print(f"Fast Inverse Square Root of {x}: {result}")
print(f"Execution time: {(end_time - start_time) * 1e6:.2f} microseconds")