n, m = map(int, input().split())

for i in range(1, n+1):
    if (i % 2):
        for j in range(1, m+1):
            print((i-1)*m+j, end=' ')
    else:
        for j in range(m, 0, -1):
            print((i-1)*m+j, end=' ')
    print()
