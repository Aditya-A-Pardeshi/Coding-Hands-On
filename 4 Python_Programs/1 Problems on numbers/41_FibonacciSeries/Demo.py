'''
Accept number from user and display that number of fabonacci series
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
'''

def DisplayFabonacci(no):
    first = 0;
    second = 1;
    third = 0;
    print(first,end = " ");
    print(second,end = " ");
    for i in range(1,no-1):
        print(first+second,end = " ");
        temp = second;
        second = first + second;
        first = temp;

def main():
    num = int(input("Enter number: "));
    DisplayFabonacci(num);

if __name__ == "__main__":
    main();