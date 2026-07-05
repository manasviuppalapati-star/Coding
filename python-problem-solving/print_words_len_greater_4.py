string=input("enter the string")
words=string.split( )
count=0
for word in words:
    if len(word)>=4:
        count+=1
print(count)
