'''
Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
'''

def Display(iStart,iEnd):
    if(iStart>iEnd):
        print("Invalid range");
        return;
    for i in range(iStart,iEnd+1):
        print("{} ".format(i),end = " ");


def main():
    iStart = int(input("Enter start range:"));
    iEnd = int(input("Enter end range:"));
    Display(iStart,iEnd);


if __name__ == "__main__":
    main();