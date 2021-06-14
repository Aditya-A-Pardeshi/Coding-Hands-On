
Addition=lambda iNo1,iNo2 : iNo1+iNo2

def fun(name):
    ret=name(11,21)
    print("The output of fun function is:",ret)

def main():
    iValue1 = int(input("Enter First number:"))
    iValue2 = int(input("Enter Second number:"))

    iRet = Addition(iValue1, iValue2)
    print("The addition is:",iRet)

    fun(Addition)

if __name__=="__main__":
    main()