'''
Write a program which checks whether 7th & 8th & 9th bit is On or OFF
Input: 1494 (10111010110)
Output: True
'''
def CheckBit(num,pos1,pos2,pos3):
    mask = 0x00000001;
    mask1 = mask<<(pos1-1);
    mask2 = mask<<(pos2-1);
    mask3 = mask<<(pos3-1);
    if((num & mask1 == mask1) and (num & mask2 == mask2) and (num & mask3 == mask3)):
        return True;
    else:
        return False;    
    
def main():
    pos1 = 7;
    pos2 = 8;
    pos3 = 9;
    no = int(input("Enter number: "));
    result = CheckBit(no,pos1,pos2,pos3);
    print(result);

if __name__ == "__main__":
    main();