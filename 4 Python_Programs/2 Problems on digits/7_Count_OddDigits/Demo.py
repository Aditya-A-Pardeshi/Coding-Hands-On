'''
Write a program which accept number from user and return the count of odd digits
Input : -1018
Output : 2
Input : 8462
Output : 0 
'''

def CountOdd(num):
    iCnt = 0;
    while(num != 0):
        if((num%10)%2 != 0):
            iCnt = iCnt+1;
        num = int(num/10);
    return iCnt;

def main():
    no = int(input("Enter number: "));
    iCnt = CountOdd(no);
    print("Number of odd digits: {}".format(iCnt));


if __name__ == "__main__":
    main();