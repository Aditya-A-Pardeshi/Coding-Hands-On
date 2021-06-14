'''
Accept number from user and check whether number is even or odd
'''

def CheckEven(num):
    if(num%2 == 0):
        return True;
    else:
        return False;

def main():
    no1 = int(input("Enter number:"));
    ans = CheckEven(no1);
    if(ans == True):
        print("Even");
    else:
        print("Odd");


if __name__ == "__main__":
    main();