'''
Write a program which accept two numbers and check whether numbers are equal or not
'''

def CheckNumbers(num1,num2):
    if(num1 == num2):
        return True;
    else:
        return False;

def main():
    no1 = int(input("Enter first number: "));
    no2 = int(input("Enter second number: "));
    result = CheckNumbers(no1,no2);
    if(result == True):
        print("Numbers are equal");
    else:
        print("Numbers are not equal");

if __name__ == "__main__":
    main();