'''
Write a program which accept number from user and count frequency of 4 in it
Input : 9440
Output : 2
Input : 922432
Output : 1
'''

def CountFour(num):
    iCnt = 0;
    if(num < 0):
        num = -num;
    while(num != 0):
        if(num%10 == 4):
            iCnt = iCnt + 1;
        num = int(num/10);
    return iCnt;


def main():
    no = int(input("Enter number:"));
    result = CountFour(no);
    print(result);


if __name__ == "__main__":
    main();