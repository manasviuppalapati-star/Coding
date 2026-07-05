# Armstrong Number:
num1=int(input("Enter the number:"))
def armstrongNumber(num):
  temp=num
  sum1=0
  count=0
  while temp>0:
    r=temp%10
    count+=1
    temp=temp//10
  while num>0:
    r1=num%10
    sum1=sum1+(r1**count)
    num//=10  
  return sum1
num2 = armstrongNumber(num1)
if num1==num2:
  print("yes")
else:
  print("no")
