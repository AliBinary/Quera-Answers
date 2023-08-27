'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

import math
n = int((input()))

x = math.log2(n)

x = int(math.pow(2, math.ceil(x)))
print(x)
