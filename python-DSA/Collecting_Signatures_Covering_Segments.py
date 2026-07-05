def optimal_points(segments):
    segments.sort(key=lambda x: x[1])

    points = []

    current = None

    for start, end in segments:
        if current is None or current < start:
            current = end
            points.append(current)

    return points


n = int(input())

segments = []

for _ in range(n):
    a, b = map(int, input().split())
    segments.append((a, b))

ans = optimal_points(segments)

print(len(ans))
print(*ans)
