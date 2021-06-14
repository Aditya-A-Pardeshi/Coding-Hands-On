#Take input from user and store into a list and return addition of all the elements in that list..

def Addition(arr):
    iSum=0
    for item in arr:
        iSum=iSum+item
    return iSum

def main():
    arr=[]
    size=int(input("Enter number of elements:"))
    for i in range(size):
        item=int(input(f"Enter element number {i+1}:"))
        arr.append(item)
    print(f"The created list of {size} element is:",arr)

    iRet=Addition(arr)
    print("The addition of elements in the list is:",iRet)

if __name__=="__main__":
    main()