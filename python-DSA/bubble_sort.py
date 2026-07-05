#bubble sort:
list1=[64, 34, 25, 12, 22, 11, 90]
length=len(list1)
def bubbleSort(list1) :
    for num1 in range(length):
        for num2 in range(0,length-1-num1):
            if list1[num2]>list1[num2+1]:
                list1[num2],list1[num2 + 1]=list1[num2 + 1],list1[num2]
                
    return list1
print(bubbleSort(list1))
