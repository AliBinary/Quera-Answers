'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 10:06:47
'''

name = input()
vowels = ['a', 'e', 'i', 'o', 'u']
ways = 1

for char in name:
    if char in vowels:
        ways *= 2
print(ways)
