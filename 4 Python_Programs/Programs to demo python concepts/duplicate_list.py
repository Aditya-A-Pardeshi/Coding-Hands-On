characters=['a','b','c','d','b','c','e','f','a','a']
duplicates=[]


for i in characters:
    if characters.count(i)>1:
        if i not in duplicates:
            duplicates.append(i)
print(duplicates)
