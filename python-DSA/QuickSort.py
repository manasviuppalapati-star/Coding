#Quick Sort:
"""
pivot and partition : central point of rotation, dividing
method to choose them:
1. random
2. medium
3. 1st ele
4. last ele
"""
#last ele as pivot:
#sort them by pivot point (smaller ones on the right and larger ones on the left they don't need to be in order.)
#in this case right is [6,3,5,2],left is [9]
#repeat the same
""" in round 2 the right array will be [2] and the left will be [6,3,5]
in round 3 the right array will be[3] and left will be [6]
the combination of these small elements forms the sorted array"""
def partition(arr,low,high):
    pivot=arr[high]
    i=low-1
    for j in range(low,high):
        if arr[j]<pivot:
            i+=1
            #swap:
            arr[i],arr[j]=arr[j],arr[i]
    i+=1
    arr[i],arr[high]=arr[high],arr[i]
    return i

        
def QuickSort(arr,low,high):
    if (low<high):
        pidx=partition(arr,low,high)
        QuickSort(arr,low,pidx-1) 
        QuickSort(arr,pidx+1,high)
        
arr=[6,3,9,5,2,8]
length=len(arr)
QuickSort(arr,0,length-1)
for x in range(length):
    print(arr[x])


