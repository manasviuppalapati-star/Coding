#Majority Element
from collections import Counter

n = int(input())
arr = list(map(int, input().split()))

count = Counter(arr)

found = 0
for value in count.values():
    if value > n // 2:
        found = 1
        break

print(found)
