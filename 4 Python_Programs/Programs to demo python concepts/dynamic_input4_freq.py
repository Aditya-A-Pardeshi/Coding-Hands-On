#Take input from user and store into a list and accept number and return frequency of that number in that list..

def Frequency(arr,iFreq):
    iCnt=0
    for item in arr:
        if item==iFreq:
            iCnt=iCnt+1
    return iCnt

def main():
    arr=[]
    size=int(input("Enter number of elements:"))
    for i in range(size):
        item=int(input(f"Enter element number {i+1}:"))
        arr.append(item)
    print(f"The created list of {size} element is:",arr)

    iFreq=int(input("Enter the element to be search:"))

    iRet=Frequency(arr,iFreq)
    print(f"The frequecy of the element {iFreq} in list {arr} is:",iRet)

if __name__=="__main__":
    main()