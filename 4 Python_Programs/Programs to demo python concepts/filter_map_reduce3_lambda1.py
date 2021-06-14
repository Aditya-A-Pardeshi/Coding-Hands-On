#Accept N numbers from user and filter out only even numbers from that N numbers.
#After that add 2 in every even number.
#After the addition of 2 perform summation of that modified numbers.

from functools import reduce

ChkEven= lambda no:no%2==0

Addition=lambda no: no+2

Summation=lambda no1,no2: no1+no2

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        iNo=int(input("Enter the element:"))
        arr.append(iNo)
    print("Enter list is:",arr)

    FilterList=list(filter(ChkEven,arr))
    print("The list after filter is:",FilterList)

    MapList = list(map(Addition,FilterList))
    print("The list after map is:", MapList)

    iSum = reduce(Summation, MapList)
    print("The list after reduce(Summation of all elements) is:", iSum)


if __name__=="__main__":
    main()



