#Accept N numbers from user and filter out only even numbers from that N numbers.
#After that add 2 in every even number.
#After the addition of 2 perform summation of that modified numbers.

from functools import reduce

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        iNo=int(input("Enter the element:"))
        arr.append(iNo)
    print("Enter list is:",arr)

    FilterList=list(filter(lambda no:no%2==0,arr))
    print("The list after filter is:",FilterList)

    MapList = list(map(lambda no: no+2,FilterList))
    print("The list after map is:", MapList)

    iSum = reduce(lambda no1,no2: no1+no2, MapList)
    print("The list after reduce(Summation of all elements) is:", iSum)


if __name__=="__main__":
    main()


