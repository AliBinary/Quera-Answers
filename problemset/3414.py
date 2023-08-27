'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

points = input().split()
x1 = points[0]
y1 = points[2]
x2 = points[1]
y2 = points[3]
if x1 == y1:
    print("Vertical")
elif x2 == y2:
    print("Horizontal")
else:
    print("Try again")
