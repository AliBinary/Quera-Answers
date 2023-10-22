'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 22.10.2023 09:51:16
'''

import math

(n, k) = list(map(int, input().split()))
for i in range(k):
    n /= 2
    n = math.floor(n)
print(n)
