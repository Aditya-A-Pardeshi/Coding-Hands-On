'''
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers
iNum1: 00000000000000000000011100110000 - 1840
iNum1: 00000000000000000010010100110000 - 9520
OP: 5 6 9 11
'''

def DisplayOnBitsPosition(num1,num2):
    for i in range(1,33):
        mask = (1 << (i-1));
        if((num1 & mask == mask) and (num2 & mask == mask)):
            print(i,end = " ");

def main():
    no1 = int(input("Enter first number: "));
    no2 = int(input("Enter second number: "));
    DisplayOnBitsPosition(no1,no2);

if __name__ == "__main__":
    main();