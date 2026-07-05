#Organizing a Lottery
n, m = map(int, input().split())

events = []

for _ in range(n):
    l, r = map(int, input().split())
    events.append((l, 'L'))
    events.append((r, 'R'))

points = list(map(int, input().split()))

for i, p in enumerate(points):
    events.append((p, 'P', i))

events.sort(key=lambda x: (x[0], x[1]))

active = 0
answer = [0] * m

for event in events:
    if event[1] == 'L':
        active += 1
    elif event[1] == 'R':
        active -= 1
    else:
        answer[event[2]] = active

print(*answer)
