'''
Write a program which accept number from user and return the count of digits in between 3 and 7
Input : 2395
Output : 1
Input : 1018
Output : 0 
'''

def CountDigits(num):
    iCnt = 0;
    while(num != 0):
        if((num%10 > 3) and (num%10 < 7)):
            iCnt = iCnt+1;
        num = int(num/10);
    return iCnt;

def main():
    no = int(input("Enter number: "));
    iCnt = CountDigits(no);
    print("Number of digits between 3 and 7: {}".format(iCnt));


if __name__ == "__main__":
    main();