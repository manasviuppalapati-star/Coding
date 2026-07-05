#Binary Search
def binary_search(arr, x):
    left = 0
    right = len(arr)-1

    while left <= right:
        mid = (left+right)//2

        if arr[mid] == x:
            return mid

        elif arr[mid] < x:
            left = mid+1

        else:
            right = mid-1

    return -1


n = int(input())
arr = list(map(int, input().split()))

m = int(input())
queries = list(map(int, input().split()))

for q in queries:
    print(binary_search(arr, q), end=" ")
