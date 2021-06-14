'''
Write a program to find largest of three numbers
'''

def LargestOfThreeNumbers(no1,no2,no3):
    if((no1>=no2) and (no1>=no3)):
        return no1;
    elif((no2>=no1) and (no2>=no3)):
        return no2;
    else:
        return no3;

def main():
    num1 = int(input("Enter first number: "));
    num2 = int(input("Enter second number: "));
    num3 = int(input("Enter third number: "));
    result = LargestOfThreeNumbers(num1,num2,num3);
    print("Largest number: {}".format(result));

if __name__ == "__main__":
    main();