# Selection Sort
list1=eval(input("Enter the list"))
length=len(list1)
def SelectionSort(list1):
    for num1 in range(0,length-1):
        for num2 in range(num1+1,length-1):
            if list1[num1]>list1[num2]:
                list1[num1],list1[num2]=list1[num2],list1[num1]
    return list1
print(SelectionSort(list1))
