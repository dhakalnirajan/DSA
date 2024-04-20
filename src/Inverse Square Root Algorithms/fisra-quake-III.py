import math
import time
import struct


def quake3_inv_sqrt(x):
    xhalf = 0.5 * x
    i = struct.unpack("<I", struct.pack("<f", x))[
        0
    ]  # store floating-point bits in integer
    i = 0x5F3759DF - (i >> 1)  # initial guess
    y = struct.unpack("<f", struct.pack("<I", i))[0]
    return y


x = 2.0
start_time = time.time()
result = quake3_inv_sqrt(x)
end_time = time.time()

print(f"Quake III Inverse Square Root of {x}: {result}")
print(f"Execution time: {(end_time - start_time) * 1e6:.2f} microseconds")
