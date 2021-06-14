#substraction decorator

def substraction(no1,no2):
    return no1-no2

def SubDecorator(func_name):
    def updator(a,b):
        if a<b:
            a,b=b,a

        return func_name(a,b)
    return updator

def main():

    sub=SubDecorator(substraction)
    val1=int(input("Enter 1st no:"))
    val2 = int(input("Enter 1st no:"))

    ret=sub(val1,val2)
    print("The substraction is:",ret)

if __name__=="__main__":
    main()