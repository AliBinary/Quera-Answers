'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:13:31
'''

str0 = input().split()
(n, q, l) = [int(i) for i in str0]
ans = {}

for i in range(n):
    (str1, str2) = input().split()
    ans[str1] = str2

for i in range(q):
    str3 = input()
    if (str3 in ans.keys()):
        print(ans[str3])
    else:
        print("Unknown")
