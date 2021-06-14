'''
Write a program which accept three numbers and print its multiplication
Input : 5 4 7
Output : 140
Input : 5 0 7
Output : 35 
'''

def Multiply(num1,num2,num3):
    result = 1;
    if(num1 != 0):
        result = result * num1;
    if(num2 != 0):
        result = result * num2;
    if(num3 != 0):
        result = result * num3;
    return result;

def main():
    no1 = int(input("Enter number1: "));
    no2 = int(input("Enter number2: "));
    no3 = int(input("Enter number3: "));
    result = Multiply(no1,no2,no3);
    print(result);

if __name__ == "__main__":
    main();
