'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

line = input()
line = line.split()
r = int(line[0])
c = int(line[1])

a = 10 - r + 1

if 1 <= c <= 10:
    side = "Right"
    b = c
else:
    side = "Left"
    b = 21 - c

print(side, a, b)
