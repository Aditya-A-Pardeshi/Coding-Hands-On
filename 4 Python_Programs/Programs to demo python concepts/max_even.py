def Max_Even(numbers):
    even=[]
    for i in numbers:
        if i % 2==0:
            even.append(i)
    print(even)
    return max(even)

def main():
    numbers=[]
    size=int(input("Enter the number of elements:"))
    for i in range(size):
        no=int(input("Enter element:"))
        numbers.append(no)
    print(numbers)

    ret=Max_Even(numbers)
    print("The maximum even number in the list is:",ret)

if __name__=="__main__":
    main()