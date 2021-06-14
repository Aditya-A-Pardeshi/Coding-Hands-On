'''
Accept number from user and return its generic root
Input:789
Output:7+8+9 = 24 ->2+4 = 6
Input:9948
Output: 9+9+4+8 = 30 -> 3+0 = 3
'''

def FindGenericRoot(num):
    if(num<0):
        num = -num;
    iCnt = 0;
    sum = 0;
    temp = num;
    while(iCnt != 1):
        sum = 0;
        iCnt = 0;
        while(temp != 0):
            iCnt = iCnt + 1;
            sum = sum + (temp%10);
            temp = int(temp/10);
        temp = sum;
    return sum;

def main():
    no = int(input("Enter number: "));
    result = FindGenericRoot(no);
    print(result);

if __name__ == "__main__":
    main();