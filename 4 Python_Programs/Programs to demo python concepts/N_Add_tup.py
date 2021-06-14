
def Addition(Arr):
    iSum=0
    print(type(Arr))
    for i in range(len(Arr)):
        iSum=iSum+Arr[i]
    return iSum


def main():

        arr=(10,100,)
        print(type(arr))
        print(arr)

        iRet=Addition(arr)
        print("The addition of an array is:",iRet)



if __name__=="__main__":
    main()