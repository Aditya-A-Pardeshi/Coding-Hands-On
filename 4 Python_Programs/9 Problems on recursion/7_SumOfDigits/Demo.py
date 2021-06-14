'''
Write a recursive program which accept number from user and return
summation of its digits
'''
sum = 0;
def AddDigits(num):
    if(num<0):
        num = -num;
    global sum;
    if(num != 0):
        digit = num%10;
        sum = sum + digit;
        num = int(num/10);
        AddDigits(num);
    return sum;
    

def main():
    no = int(input("Enter number: "));
    result = AddDigits(no);
    print("Sum of digits: {}".format(result));

if __name__ == "__main__":
    main();