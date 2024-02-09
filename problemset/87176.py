'''
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 12:10:46
'''


def game(number):
    n0 = int(str(number)[0])
    n1 = int(str(number)[1])
    if (n0 > n1):
        return n0 - n1
    else:
        return n1 - n0
