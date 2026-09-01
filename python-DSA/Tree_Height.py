from collections import deque

n = int(input())
parent = list(map(int, input().split()))

children = [[] for _ in range(n)]
root = 0

for i in range(n):
    if parent[i] == -1:
        root = i
    else:
        children[parent[i]].append(i)

q = deque([(root, 1)])
height = 0

while q:
    node, level = q.popleft()
    height = max(height, level)

    for child in children[node]:
        q.append((child, level + 1))

print(height)
