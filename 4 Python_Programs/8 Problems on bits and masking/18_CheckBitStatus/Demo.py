'''
Write a program which accept one number from user and check whether
9th or 12th bit is on or off
iNum1: 1011100110000 - 5936
OP: TRUE
iNum1: 1011000110000 - 5680
OP: FALSE
iNum1: 1111100110000 - 7984
OP: TRUE
'''

def CheckBitStatus(num,pos1,pos2):
    if(((num & (1<<(pos1-1))) == (1<<(pos1-1))) or ((num & (1<<(pos2-1))) == (1<<(pos2-1)))):
        return True;
    else:
        return False;

def main():
    no = int(input("Enter number: "));
    pos1 = 9;
    pos2 = 12;
    result = CheckBitStatus(no,pos1,pos2);
    print(result);

if __name__ == "__main__":
    main();
