'''
Write a recursive program which accept number from user and return its product of digits.
Input : 523
Output : 30
'''
ans = 1;
def FindProduct(num):
    if(num<0):
        num = -num;
    global ans;
    if(num != 0):
        digit = num%10;
        if(digit != 0):
            ans = ans * digit;
        num = int(num/10);
        FindProduct(num);
    return ans;
    

def main():
    no = int(input("Enter number: "));
    result = FindProduct(no);
    print("Factorial: {}".format(result));

if __name__ == "__main__":
    main();