from collections import deque

q = deque()

for i in range(4):
    a, b = map(str, input().split())
    if (b == 'U'):
        continue
    elif (b == 'L'):
        q.append(a)
    else:
        q.appendleft(a)

print(q[1])
