'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 08:59:03
'''

(m, s) = input().split()
m = int(m)
s = int(s)

minimum = maximum = "0".zfill(m)
if (m == 0 or s == 0 or s > (m*9)):
    minimum = maximum = -1

elif (m == 1 and s <= 9):
    minimum = maximum = s

else:
    for i in range(m):
        if (s < 1):
            break

        if (s > 9):
            s -= 9
            a = str(9)
            b = str(9)
        else:
            a = str(s - 1)
            b = str(s)
            s = 0

        minimum = minimum[:m-i-1] + a + minimum[m-i:]
        maximum = maximum[:i] + b + maximum[i+1:]
    minimum = int(minimum) + 10**(m-1)
    maximum = int(maximum)


print(minimum, maximum)
