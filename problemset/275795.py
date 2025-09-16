n = int(input())

ans = 0
for i in range(1, n+1):
    ans += i

print(*list(range(1, n+1)), sep=' + ', end=' = ')
print(ans)
