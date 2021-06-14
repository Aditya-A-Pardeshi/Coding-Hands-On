'''
Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4 
'''

def PrintNumberLine(no):
    if(no<0):
        print("{} is not a positive number".format(no));
        return;
    for i in range(-no,no+1):
        print(i,end = " ");

def main():
    num = int(input("Enter a positive number: "));
    PrintNumberLine(num);

if __name__ == "__main__":
    main();