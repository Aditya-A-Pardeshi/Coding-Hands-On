#Accept N numbers from user and filter out only even numbers from that N numbers.
#After that add 2 in every even number.
#After the addition of 2 perform summation of that modified numbers.

def MarvellousFilter(arr):
    brr=[]
    for i in arr:
        if(i%2==0):
            brr.append(i)
    return brr

def MarvellousMap(arr):
    brr=[]
    for i in arr:
        i=i+2
        brr.append(i)
    return brr


def MarvellousReduce(arr):
    brr=[]
    iSum=0
    for i in arr:
        iSum=iSum+i
    return iSum

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        iNo=int(input("Enter the element:"))
        arr.append(iNo)
    print("Enter list is:",arr)

    FilterList=MarvellousFilter(arr)
    print("The list after filter is:",FilterList)

    MapList = MarvellousMap(FilterList)
    print("The list after map is:", MapList)

    iSum = MarvellousReduce(MapList)
    print("The list after reduce(Summation of all elements) is:", iSum)


if __name__=="__main__":
    main()



