#accept number and return power of two.

Power=lambda iNo : 2**iNo


def main():
    iValue=int(input("Enter the number:"))

    iRet=Power(iValue)

    print(f"The power of 2 of a number {iValue} is:",iRet)

if __name__=="__main__":
    main()