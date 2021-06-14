'''
Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9
'''
max = 0;
def FindLargestDigit(num):
    if(num<0):
        num = -num;
    global max;
    if(num != 0):
        digit = num%10;
        if(digit > max):
            max = digit;
        num = int(num/10);
        FindLargestDigit(num);
    return max;

def main():
    no = int(input("Enter number: "));
    result = FindLargestDigit(no);
    print("LargestDigit: {}".format(result));

if __name__ == "__main__":
    main();