from collections import deque

size, n = map(int, input().split())
buffer = deque()

for _ in range(n):
    arrival, duration = map(int, input().split())

    while buffer and buffer[0] <= arrival:
        buffer.popleft()

    if len(buffer) == size:
        print(-1)
    else:
        start = arrival if not buffer else buffer[-1]
        finish = start + duration
        buffer.append(finish)
        print(start)
