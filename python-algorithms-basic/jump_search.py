# Jump search:
""" It works only on the sorted lists
jumps ate sqrt of the length of the list"""
import math

arr = [1,4,2,3,6,9,5,10]
arr.sort()

x = int(input("Enter element: "))
n = len(arr)
step = int(math.sqrt(n))
i = 0

while i < n and arr[i] < x:
    i += step

for j in range(max(0, i-step), min(i+1, n)):
    if arr[j] == x:
        print("Found at index:", j)
        break
else:
    print("Not Found")
            



