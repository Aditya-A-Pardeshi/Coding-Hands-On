#Write a program which contains filter(), map() and reduce() in it.
#Python application which contains one list of numbers. List contains the numbers which are accepted from user.
#Filter should filter out all prime numbers.
#Map function will multiply each number by 2.
#Reduce will return Maximum number from that numbers.

from functools import reduce

def ChkPrime(no):
    for i in range(2, no):
        if no % i == 0:
            return False
            break
    else:
        return  True

def Multiply(no):
    return no*2

def main():
    arr=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        no=int(input(f"Enter the element {i+1}:"))
        arr.append(no)
    print("The list is:",arr)

    FilterList=list(filter(ChkPrime,arr))
    print("The output after filter is:",FilterList)

    MapList = list(map(Multiply, FilterList))
    print("The output after map is:", MapList)

    output = reduce(lambda a,b : a if a > b else b,MapList)
    print("The output after reduce is:", output)


if __name__=="__main__":
    main()