'''
Write a program which checks whether 15th bit is On or OFF
Input: 21846 (101010101010110)
Output: True
Input: 70998 (10001010101010110)
Output: False
'''
def CheckBit(num,pos):
    mask = 0x00000001;
    mask = mask<<(pos-1);
    if(num & mask == mask):
        return True;
    else:
        return False;    
    
def main():
    pos = 15;
    no = int(input("Enter number: "));
    result = CheckBit(no,pos);
    print(result);

if __name__ == "__main__":
    main();