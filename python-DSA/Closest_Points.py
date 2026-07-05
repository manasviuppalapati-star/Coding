#Closest Points
import math

def distance(p1, p2):
    return math.hypot(p1[0]-p2[0], p1[1]-p2[1])

def closest(points):
    if len(points) <= 3:
        ans = float('inf')
        for i in range(len(points)):
            for j in range(i+1, len(points)):
                ans = min(ans, distance(points[i], points[j]))
        return ans

    mid = len(points)//2
    midx = points[mid][0]

    dl = closest(points[:mid])
    dr = closest(points[mid:])

    d = min(dl, dr)

    strip = []

    for p in points:
        if abs(p[0]-midx) < d:
            strip.append(p)

    strip.sort(key=lambda x:x[1])

    for i in range(len(strip)):
        j = i+1
        while j < len(strip) and (strip[j][1]-strip[i][1]) < d:
            d = min(d, distance(strip[i], strip[j]))
            j += 1

    return d


n = int(input())

points = []

for _ in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

points.sort()

print("{:.9f}".format(closest(points)))
