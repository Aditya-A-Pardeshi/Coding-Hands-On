'''
Write a recursive program which display below pattern.
Input : 5
Output : * * * * * 
'''

def DisplayPattern(num):
    if(num<=0):
        print("Invalid number");
        return;
    if(num != 0):
        print("* ",end = " ");
        num = num -1;
        DisplayPattern(num);

def main():
    no = int(input("Enter number: "));
    DisplayPattern(no);

if __name__ == "__main__":
    main();