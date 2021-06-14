'''
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
'''
rev = 0;
def ReverseDigits(num):
    flag = False;
    if(num<0):
        flag = True;
        num = -num;
    global rev;
    if(num != 0):
        digit = num%10;
        rev = (rev*10) + digit;
        num = int(num/10);
        ReverseDigits(num);
    if(flag == True):
        return -rev;
    else:
        return rev;

def main():
    no = int(input("Enter number: "));
    result = ReverseDigits(no);
    print("Reverse Number: {}".format(result));

if __name__ == "__main__":
    main();