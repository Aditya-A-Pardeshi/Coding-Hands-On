'''
Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9
'''
min = 9;
def FindSmallestDigit(num):
    if(num<0):
        num = -num;
    global min;
    if(num != 0):
        digit = num%10;
        if(digit < min):
            min = digit;
        num = int(num/10);
        FindSmallestDigit(num);
    return min;

def main():
    no = int(input("Enter number: "));
    result = FindSmallestDigit(no);
    print("Smallest Digit: {}".format(result));

if __name__ == "__main__":
    main();