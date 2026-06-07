l1=eval(input("Enter the list:"))
num=int(input("Enter the element to be found:"))
try:
       if num in l1:
          print(l1.index(element))
          
       else:
           print(" element not found")
except:
    print(" element not found")
