#Exponential Search: It is the combination of
#linear and binary search
"""Sorted array     
   Time complexity-O(logn)
   It is mostly done with the
   base 2 but can be done with other bases also"""
""" how it works index basically goes from 1 to 2, 2 to 4 etc"""
arr=[1,2,3,4,5,16,17,18,19,20,29]
x = int(input("Enter element: "))
n = len(arr)

i = 1
while i < n and arr[i] <= x:
    i *= 2
print("I:",i)
l = i//2
print ("n-1:",n-1)
r = min(i, n-1)
print("L:",l)
print("r:",r)
while l <= r:
    m = (l + r)//2
    print("L+R:",l+r)
    print("M:",m)
    if arr[m] == x:
        print("Found at index:", m)
        break
    elif arr[m] < x:
        l = m + 1
    else:
        r = m - 1
else:
    print("Not Found")



