
def Display(*args,**kwargs):
    print(*args)
    print(args)
    print((type(args)))

    print(kwargs)
    print(type(kwargs))


Display(1,2,3, num1=10,num2=20)