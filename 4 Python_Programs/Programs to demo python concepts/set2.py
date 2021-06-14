arr={10,20.2,"Hello",30}

print(arr)
print((type(arr)))
print(len(arr))

for i in arr:
    print(i)

if "Hello" in arr:
    print("Hello is present")

arr.add(40)
print(arr)


"""
arr.remove(50)      #gives error to avoid error use discard
print(arr)
"""

arr.discard(50)
print(arr)

arr.pop()
print(arr)


