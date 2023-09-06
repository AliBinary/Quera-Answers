'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 19:39:32
'''

txt = input()
r = y = g = 0
for letter in txt:
    if (letter == 'R'):
        r += 1
    elif (letter == 'Y'):
        y += 1
    else:
        g += 1

ans = "rahat baash"
if (r > 2 or (r > 1 and y > 1) or g == 0):
    ans = "nakhor lite"
print(ans)
