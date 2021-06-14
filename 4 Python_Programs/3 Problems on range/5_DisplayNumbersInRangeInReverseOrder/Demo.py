'''
Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23 
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range
'''

def Display(iStart,iEnd):
    if(iStart>iEnd):
        print("Invalid range");
        return;
    for i in range(iEnd,iStart-1,-1):
        print("{} ".format(i),end = " ");


def main():
    iStart = int(input("Enter start range:"));
    iEnd = int(input("Enter end range:"));
    Display(iStart,iEnd);


if __name__ == "__main__":
    main();