'''
Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F 
'''

def DisplayPattern(num,ch):
    if(num<0):
        num = -num;
    if(num != 0):
        print("{} ".format(chr(ch)),end = " ");
        ch = ch+1;
        num = num -1;
        DisplayPattern(num,ch);

def main():
    no = int(input("Enter number: "));
    ch = 65;
    DisplayPattern(no,ch);

if __name__ == "__main__":
    main();