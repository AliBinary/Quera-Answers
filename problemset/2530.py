'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 14:25:07
'''

word = input()

ans = 1
for i in word:
    if (i in ["T", "D", "L", "F"]):
        ans *= 2

print(ans)
