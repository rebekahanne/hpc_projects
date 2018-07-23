# -*- coding: utf-8 -*-
from matplotlib import pyplot as plt
import numpy as np

# 1 node
seconds1 = np.array([
    1269.007123,
    679.380493,
    335.184198,
    176.042392,
    284.232686
    ])
threads = np.array([
    1,
    2,
    4,
    8,
    16
    ])
seconds1 = seconds1 / seconds1[0]

# 5 node
seconds5 = np.array([
    259.555395,
    137.453174,
    65.248565,
    38.511804,
    60.539282
    ])
seconds5 = seconds5 / seconds5[0]

# 10 node
seconds10 = np.array([
    133.684490,
    67.451136,
    37.507909,
    22.801619,
    32.610038
    ])
seconds10 = seconds10 / seconds10[0]

# 20 node
seconds20 = np.array([
    68.648324,
    36.831296,
    21.122135,
    12.877873,
    17.860869
    ])
seconds20 = seconds20 / seconds20[0]
print(seconds)
plt.plot(threads, seconds1, 'o')
plt.plot(threads, seconds1)
plt.plot(threads, seconds5, 'o')
plt.plot(threads, seconds5)
plt.plot(threads, seconds10, 'o')
plt.plot(threads, seconds10)
plt.plot(threads, seconds20, 'o')
plt.plot(threads, seconds20)
plt.title('DSDP hybrid speedup')
plt.xlabel('threads')
plt.ylabel('seconds')
plt.show()

plt.savefig('DSDP_hybrid_20node_speedup.png')
