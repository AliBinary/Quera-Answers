'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 11:57:54
'''

t = int(input())
for _ in range(t):
    a, b, c, d = list(map(int, input().split()))
    ans = "esteghlal"

    if (a+c > b+d or (a+c == b+d and c > b)):
        ans = "perspolis"
    elif (a+c == b+d and c == b):
        ans = "penalty"

    print(ans)
