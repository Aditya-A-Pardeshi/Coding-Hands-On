#lambda function accepts two parameters and return its multiplication.

Multiplication=lambda iNo1,iNo2 : iNo1*iNo2

def main():
    iValue1=int(input("Enter First number:"))
    iValue2=int(input("Enter Second number:"))

    iRet=Multiplication(iValue1,iValue2)
    print(f"The multiplication of {iValue1} and {iValue2} is:",iRet)

if __name__=="__main__":
    main()