
def Addition(Arr):
    iSum=0
    for i in range(len(Arr)):
        iSum=iSum+Arr[i]
    return iSum


def main():

        arr=[]
        iSize=int(input("Enter the number of Elements:"))
        for i in range(iSize):
            no=int(input("Enter Element:"))
            arr.append(no)
        print(arr)

        iRet=Addition(arr)
        print("The addition of an array is:",iRet)



if __name__=="__main__":
    main()