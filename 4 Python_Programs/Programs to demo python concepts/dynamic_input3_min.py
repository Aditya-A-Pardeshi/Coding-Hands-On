#Take input from user and store into a list and return minimum in that list..

def Minimum(arr):
    return min(arr)
def main():
    arr=[]
    size=int(input("Enter number of elements:"))
    for i in range(size):
        item=int(input(f"Enter element number {i+1}:"))
        arr.append(item)
    print(f"The created list of {size} element is:",arr)

    iRet=Minimum(arr)
    print("The minimum element in the list is:",iRet)

if __name__=="__main__":
    main()