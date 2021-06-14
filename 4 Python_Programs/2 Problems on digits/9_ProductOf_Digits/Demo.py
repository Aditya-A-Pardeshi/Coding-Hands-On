'''
"Write a program which accept number from user and return multiplication of all digits
Input : 2395
Output : 270
Input : 1018
Output : 8"
'''

def MultiplyDigits(num):
    iAns = 1;
    while(num != 0):
        if(num%10 != 0):
            iAns = iAns * (num%10);
        num = int(num/10);
    return iAns;

def main():
    no = int(input("Enter number: "));
    iResult = MultiplyDigits(no);
    print("Multiplication of digits: {}".format(iResult));


if __name__ == "__main__":
    main();