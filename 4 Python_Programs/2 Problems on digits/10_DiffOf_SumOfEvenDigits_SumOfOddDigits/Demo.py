'''
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2) 
'''

def FindDiff(num):
    iEvenCnt = 0;
    iOddCnt = 0;
    while(num != 0):
        if((num%10)%2 == 0):
            iEvenCnt = iEvenCnt + num%10;
        else:
            iOddCnt = iOddCnt + num%10;
        num = int(num/10);
    return (iEvenCnt - iOddCnt);

def main():
    no = int(input("Enter number: "));
    iResult = FindDiff(no);
    print("Answer: {}".format(iResult));


if __name__ == "__main__":
    main();