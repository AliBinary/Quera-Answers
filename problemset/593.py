'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 08:59:54
'''
from math import sqrt

n = input()
p = sum([int(i) for i in n])
n = int(n)


def isprime(a):
    end = int(sqrt(a))
    for i in range(2, end+1):
        if not (a % i):
            return False
    return True


while (p > 0):
    n += 1
    if (isprime(n)):
        p -= 1
        ans = n

print(ans)
