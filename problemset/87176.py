'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 12:33:35
'''


def game(number):
    n0 = int(str(number)[0])
    n1 = int(str(number)[1])
    if (n0 > n1):
        return n0 - n1
    else:
        return n1 - n0
