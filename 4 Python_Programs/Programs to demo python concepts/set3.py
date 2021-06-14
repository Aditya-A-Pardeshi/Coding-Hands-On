

arr={10,20.2,"String",3+4j}

print(arr)
print(type(arr))

temp=list(arr)
print(temp)
print(type(temp))

temp[1]=21

arr=set(temp)
print(arr)
print(type(arr))