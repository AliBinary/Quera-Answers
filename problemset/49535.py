'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:13:01
'''

(n, k) = input().split()
n = int(n)
k = int(k)
s = 0
for i in range(n):
    s += int(input())

if (s >= k):
    print("YES")
else:
    print("NO")
