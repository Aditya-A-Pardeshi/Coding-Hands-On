'''
Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5 
'''

def DisplayPattern(num):
    if(num<=0):
        print("Invalid number");
        return;
    if(num != 0):
        temp = num;
        num = num -1;
        DisplayPattern(num);
        print("{} ".format(temp),end = " ");

def main():
    no = int(input("Enter number: "));
    DisplayPattern(no);

if __name__ == "__main__":
    main();