#Write a program which contains filter(), map() and reduce() in it.
# Python application which contains one list of numbers. List contains the numbers which are accepted from user.
# Filter should filter out all such numbers which greater than or equal to 70 and less than or equal to 90.
# Map function will increase each number by 10.
# Reduce will return product of all that numbers.

from functools import reduce

def Greater(no):
    if no>=70 and no<=90:
        return True
    else:
        return False
def Addition(no):
    return no+10
def Summation(no1,no2):
    return no1+no2

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        no=int(input(f"Enter the element {i+1}:"))
        arr.append(no)
    print("The list is:",arr)

    FilterList=list(filter(Greater,arr))
    print("The output after filter is:",FilterList)

    MapList = list(map(Addition, FilterList))
    print("The output after map is:", MapList)

    output = reduce(Summation, MapList)
    print("The output after reduce is:", output)


if __name__=="__main__":
    main()