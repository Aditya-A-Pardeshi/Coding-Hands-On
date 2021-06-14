'''
Accept two numbers from user and display first number on screen second number of times
'''

def PrintNumber(no1,no2):
    for i in range(0,no2):
        print("{} ".format(no1),end = ' ');

def main():
    no1 = int(input("Enter first number:"));
    no2 = int(input("Enter second number"));
    PrintNumber(no1,no2);

if (__name__ == "__main__"):
    main();