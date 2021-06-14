'''
Write a program which accept number from user and display its digits in reverse order
Input : 2395
Output : 5932
'''

def ReverseDigits(no):
    ans = 0;
    if(no < 0):
        no = -no;
        while(no != 0):
            ans = (ans*10) + (no%10);
            no = int(no/10);
        return -ans;
    else:
        while(no != 0):
            ans = (ans*10) + (no%10);
            no = int(no/10);
        return ans;

def main():
    no = int(input("Enter number: "));
    result = ReverseDigits(no);
    print("Reverse number: {}".format(result));

if __name__ == "__main__":
    main();