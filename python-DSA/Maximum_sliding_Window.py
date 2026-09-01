from collections import deque

n = int(input())
arr = list(map(int, input().split()))
k = int(input())

dq = deque()

for i in range(n):
    while dq and dq[0] <= i - k:
        dq.popleft()

    while dq and arr[dq[-1]] <= arr[i]:
        dq.pop()

    dq.append(i)

    if i >= k - 1:
        print(arr[dq[0]], end=" ")
