'''
Accept number from user and check if it is strong number or not.
Strong number is such a number whose summation of factorial of digits is same as number
Eg
Input: 
145 - 1! + 4! + 5!
Output: True
190:1! + 9! +0!
Output: False
'''

def FindFactorial(num):
    if(num == 0):
        return 1;
    ans = 1;
    for i in range(1,num+1):
        ans = ans * i;
    return ans;

def CheckStrong(num):
    if(num<0):
        num = -num;
    sum = 0;
    temp = num;
    while(temp != 0):
        digit = temp%10;
        sum = sum + FindFactorial(digit);
        temp = int(temp/10);
    if(sum == num):
        return True;
    else:
        return False;

def main():
    no = int(input("Enter number: "));
    result = CheckStrong(no);
    print(result);

if __name__ == "__main__":
    main();