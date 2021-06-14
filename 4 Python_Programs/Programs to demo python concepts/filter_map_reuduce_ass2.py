#Write a program which contains filter(), map() and reduce() in it.
#Python application which contains one list of numbers. List contains the numbers which are accepted from user.
#Filter should filter out all such numbers which are even.
#Map function will calculate its square.
#Reduce will return addition of all that numbers.

from functools import reduce

def ChkEven(no):
    if no%2==0:
        return True
    else:
        return False

def Square(no):
    return no**2

def Summation(no1,no2):
    return no1+no2

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        no=int(input(f"Enter the element {i+1}:"))
        arr.append(no)
    print("The list is:",arr)

    FilterList=list(filter(ChkEven,arr))
    print("The output after filter is:",FilterList)

    MapList = list(map(Square, FilterList))
    print("The output after map is:", MapList)

    output = reduce(Summation, MapList)
    print("The output after reduce is:", output)


if __name__=="__main__":
    main()