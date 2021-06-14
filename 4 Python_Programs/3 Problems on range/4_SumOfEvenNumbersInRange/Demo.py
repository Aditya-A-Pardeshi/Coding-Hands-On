'''
Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range 
'''

def DisplayEven(iStart,iEnd):
    sum = 0;
    if((iStart > iEnd) or (iStart < 0) or (iEnd < 0)):
        print("Invalid range");
        return False;
    for i in range(iStart,iEnd+1):
        if(i%2 == 0):
            sum = sum + i;
    return sum


def main():
    iStart = int(input("Enter start range:"));
    iEnd = int(input("Enter end range:"));
    ans = 0;
    ans = DisplayEven(iStart,iEnd);
    if(ans != False):
        print(ans);


if __name__ == "__main__":
    main();