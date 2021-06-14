'''
Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
'''

def DisplayPattern(num):
    if(num != 0):
        print("{} * ".format(num),end = " ");
        num = num - 1;
        DisplayPattern(num);
    

def main():
    no = int(input("Enter number: "));
    DisplayPattern(no);

if __name__ == "__main__":
    main();