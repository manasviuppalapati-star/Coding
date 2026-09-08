def sift_down(i, data, swaps):
    min_index = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < len(data) and data[left] < data[min_index]:
        min_index = left

    if right < len(data) and data[right] < data[min_index]:
        min_index = right

    if i != min_index:
        swaps.append((i, min_index))
        data[i], data[min_index] = data[min_index], data[i]
        sift_down(min_index, data, swaps)


n = int(input())
data = list(map(int, input().split()))

swaps = []

for i in range(n // 2 - 1, -1, -1):
    sift_down(i, data, swaps)

print(len(swaps))
for i, j in swaps:
    print(i, j)
