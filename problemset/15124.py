'''
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.06.2024 15:58:24
'''


def count_dreams(a, b, x):
    count = 0
    for i in range(1, x+1):
        if a % i == 0:
            for j in range(1, x+1-i):
                if b % j == 0:
                    count += 1
    return count


a, b, x = map(int, input().split())

print(count_dreams(a, b, x))
