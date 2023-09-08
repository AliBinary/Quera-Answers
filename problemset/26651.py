'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 12:40:32
'''

n = int(input())
a = list(map(int, input().split()))
b = [int(i) for i in input().split()]

ans = 0
for i in range(n):
    ans += b[i] * a[i]
print(ans)
