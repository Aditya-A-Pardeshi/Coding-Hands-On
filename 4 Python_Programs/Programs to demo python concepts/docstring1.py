def Add(no1,no2):
    """
Info:Performs addition of two numbers and returns result
    """
    sum=no1+no2
    return sum


ret=Add(21,11)
print(ret)


help(Add)               #display information of the Add function

print(Add.__doc__)      #magic or dunder method