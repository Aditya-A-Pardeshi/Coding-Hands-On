'''
Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35 
Output : 24 26 28 30 32 34 
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2 
'''

def DisplayEven(iStart,iEnd):
    if(iStart>iEnd):
        print("Invalid range");
        return;
    for i in range(iStart,iEnd+1):
        if(i%2 == 0):
            print("{} ".format(i),end = " ");


def main():
    iStart = int(input("Enter start range:"));
    iEnd = int(input("Enter end range:"));
    DisplayEven(iStart,iEnd);


if __name__ == "__main__":
    main();