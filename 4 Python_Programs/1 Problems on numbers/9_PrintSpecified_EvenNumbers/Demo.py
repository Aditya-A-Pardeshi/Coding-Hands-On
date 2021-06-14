'''
Write a program which accept one number from user and print that number of even numbers on screen
Input : 7
Output: 2 4 6 8 10 12 14 
'''

def PrintEven(no):
    i = 1;
    j = 2;
    while(i<=no):
        if(j%2 == 0):
            print("{} ".format(j),end = " ");
            no = no -1;
        j = j+1;


def main():
    num = int(input("Enter number:"));
    PrintEven(num);

if __name__ == "__main__":
    main();