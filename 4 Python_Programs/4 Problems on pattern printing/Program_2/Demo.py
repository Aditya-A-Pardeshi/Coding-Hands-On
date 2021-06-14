'''
Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
'''

def Display(no):
    for i in range(1,no+1):
        print("* ",end = " ");
    for i in range(1,no+1):
        print("# ",end = " ");

def main():
    no = int(input("Enter number: "));
    Display(no);
    
if __name__ == "__main__":
    main();

