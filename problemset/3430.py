'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

word = input()
n = len(word)
print(word)
for i in range(1, n):
    eko = word[i] * i + word[i:]
    print(eko)
