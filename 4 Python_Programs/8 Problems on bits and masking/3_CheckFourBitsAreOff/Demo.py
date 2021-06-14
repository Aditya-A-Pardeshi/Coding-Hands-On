'''
Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF
Input: 169301334 (1010000101110101010101010110)
Output: True
'''
def CheckBit(num,pos1,pos2,pos3,pos4):
    mask = 0x00000001;
    mask1 = mask<<(pos1-1);
    mask2 = mask<<(pos2-1);
    mask3 = mask<<(pos3-1);
    mask4 = mask<<(pos4-1);
    if((num & mask1 == mask1) and (num & mask2 == mask2) and (num & mask3 == mask3) and (num & mask4 == mask4)):
        return True;
    else:
        return False;    
    
def main():
    pos1 = 7;
    pos2 = 15;
    pos3 = 21;
    pos4 = 28;
    no = int(input("Enter number: "));
    result = CheckBit(no,pos1,pos2,pos3,pos4);
    print(result);

if __name__ == "__main__":
    main();