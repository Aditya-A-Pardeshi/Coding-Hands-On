'''
Write a program which accept number from user and count frequency of 2 in it
Input : 2395
Output : 1
Input : 1018
Output : 0 
'''

def CountTwo(num):
    iCnt = 0;
    while(num != 0):
        if(num%10 == 2):
            iCnt = iCnt + 1;
        num = int(num/10);
    return iCnt;


def main():
    no = int(input("Enter number:"));
    result = CountTwo(no);
    print(result);


if __name__ == "__main__":
    main();