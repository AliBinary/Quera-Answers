'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:13:20
'''

t = int(input())

for i in range(t):
    s = int(input())
    gift = 0
    for j in range(s):
        suggests = input().split()
        sug = [i[0] for i in suggests]
        if (gift != 0 and (sug[0] == 'c' or sug[1] == 'c')):
            gift *= 2
        elif (sug[0] == 'b' or sug[1] == 'b'):
            gift += 1
    print(gift)
