def solve(phone_number):
    n = len(phone_number)
    dp = [0] * (n + 1)
    dp[n] = 1
    for i in range(n - 1, -1, -1):
        if phone_number[i] == '0':
            dp[i] = 0
        elif i + 2 <= n and dp[i + 2]:
            dp[i] = 1
        elif i + 3 <= n and dp[i + 3]:
            dp[i] = 1
    if dp[0] == 0:
        return "NO", []
    i = 0
    res = []
    while i < n:
        if i + 2 <= n and dp[i + 2]:
            res.append(phone_number[i:i + 2])
            i += 2
        else:
            res.append(phone_number[i:i + 3])
            i += 3
    return "YES", res


q = int(input())
for _ in range(q):
    y = int(input())
    x = input()
    ans, res = solve(x)
    print(ans)
    if ans == "YES":
        print(len(res))
        for r in res:
            print(r)
