'''
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF
IP: 7984 - 1111100110000
iPos1 = 5
iPos2 = 7
'''
def CheckBitStatus(num,pos1,pos2):
    if(((num & (1<<(pos1-1))) == (1<<(pos1-1))) or ((num & (1<<(pos2-1))) == (1<<(pos2-1)))):
        return True;
    else:
        return False;

def main():
    no = int(input("Enter number: "));
    pos1 = 5;
    pos2 = 7;
    result = CheckBitStatus(no,pos1,pos2);
    print(result);

if __name__ == "__main__":
    main();