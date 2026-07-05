list1=eval(input("enter the list"))
sum1=0
for num in list1:
    if list1.count(num)==1:
        sum1+=num
print(sum1)
