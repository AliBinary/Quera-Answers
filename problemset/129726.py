'''
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 15:34:04
'''


def separator(ls):
    ls1 = []
    ls2 = []
    for i in range(len(ls)):
        if (ls[i] % 2):
            ls1.append(ls[i])
        else:
            ls2.append(ls[i])
    return tuple((ls2, ls1))
