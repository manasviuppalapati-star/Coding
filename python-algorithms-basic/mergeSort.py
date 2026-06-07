def mergeSort(arr):
    if len(arr)<=1:
        return arr
    mid=len(arr)//2
    leftH=arr[:mid]
    rightH=arr[mid:]
    #left:
    leftS=mergeSort(leftH)
    rightS=mergeSort(rightH)
    return merge(leftS,rightS)
def merge(left,right):
    sorted_arr=[]
    i=j=0
    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            sorted_arr.append(left[i])
            i+=1
        else :
            sorted_arr.append(right[j])
            j+=1

    while i<len(left):
        sorted_arr.append(left[i])
        i+=1
    while j<len(right):
        sorted_arr.append(right[j])
        j+=1

    return sorted_arr
arr=eval(input("Enter the list"))
sorted_arr=mergeSort(arr)
print(sorted_arr)
