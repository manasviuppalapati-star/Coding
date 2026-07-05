#2. Binary Search with Duplicates
def binary_search(arr, x):
    left = 0
    right = len(arr) - 1
    result = -1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == x:
            result = mid
            right = mid - 1
        elif arr[mid] < x:
            left = mid + 1
        else:
            right = mid - 1

    return result


n = int(input())
arr = list(map(int, input().split()))

m = int(input())
queries = list(map(int, input().split()))

for q in queries:
    print(binary_search(arr, q), end=" ")
