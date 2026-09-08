import heapq

# Read number of processors and jobs
n, m = map(int, input().split())

# Read job durations
jobs = list(map(int, input().split()))

# Heap stores (finish_time, thread_id)
heap = []

for i in range(n):
    heapq.heappush(heap, (0, i))

for job in jobs:
    finish_time, thread = heapq.heappop(heap)
    print(thread, finish_time)
    heapq.heappush(heap, (finish_time + job, thread))
