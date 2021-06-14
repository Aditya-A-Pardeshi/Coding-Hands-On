'''
Write a program which accept number from user and return the count of even digits
Input : 2395
Output : 1
Input : 1018
Output : 2 
'''

def CountEven(num):
    iCnt = 0;
    while(num != 0):
        if((num%10)%2 == 0):
            iCnt = iCnt+1;
        num = int(num/10);
    return iCnt;

def main():
    no = int(input("Enter number: "));
    iCnt = CountEven(no);
    print("Number of even digits: {}".format(iCnt));


if __name__ == "__main__":
    main();