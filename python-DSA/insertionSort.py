# Insertion Sort:
list1=[64, 34, 25, 12, 22, 11, 90]
length=len(list1)
for num in range(1,length,1):
       curr=list1[num]
       prev=num-1
       while prev >=0 and list1[prev]>curr:
           list1[prev+1]=list1[prev]
           prev-=1
       list1[prev+1]=curr
print(list1)    
       
