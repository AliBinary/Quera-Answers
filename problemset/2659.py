'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

n = int(input())
s1 = input()
s2 = input()
ans = 0
for i in range(n):
    if (s1[i] != s2[i]):
        ans += 1

print(ans)
