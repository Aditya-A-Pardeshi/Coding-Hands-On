'''
Write a program which accept number from user and count frequency of such a digits which are less than 6
Input : 9440
Output : 3
Input : 96672
Output : 1 
'''

def CountDigits(num):
    iCnt = 0;
    if(num < 0):
        num = -num;
    while(num != 0):
        if(num%10 < 6):
            iCnt = iCnt + 1;
        num = int(num/10);
    return iCnt;


def main():
    no = int(input("Enter number:"));
    result = CountDigits(no);
    print(result);


if __name__ == "__main__":
    main();