'''
Accept number from user and check if it is armstrong number or not
Input: 153
Output: True (1^3+5^3+3^3 = 153)
Input: 2145
Output: False (2^4+1^4+4^4+5^4 != 2145)
'''

def FindPower(no1,no2):
    ans = 1;
    for i in range(1,no2+1):
        ans = ans*no1;
    return ans;

def CheckArmstrong(num):
    if(num < 0):
        num = -num;
    #Find number of digits
    iCnt = 0;
    temp = num;
    while(temp != 0):
        iCnt = iCnt + 1;
        temp = int(temp/10);
    sum = 0;
    temp = num;
    while(temp != 0):
        sum = sum + FindPower(temp%10,iCnt);
        temp = int(temp/10);
        
    if(sum == num):
        return True;
    else:
        return False;

def main():
    no = int(input("Enter number: "));
    result = CheckArmstrong(no);
    print(result);

if __name__ == "__main__":
    main();