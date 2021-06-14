'''
Write a program which checks whether first and last bit is On or OFF
First bit means bit number 1 and last bit means bit number 32
Input: 2147489625 (10000000000000000001011101011001)
Output: True
'''
def CheckBit(num,pos1,pos2):
    mask = 0x00000001;
    mask1 = mask<<(pos1-1);
    mask2 = mask<<(pos2-1);
    if((num & mask1 == mask1) and (num & mask2 == mask2)):
        return True;
    else:
        return False;    
    
def main():
    pos1 = 1;
    pos2 = 32;
    no = int(input("Enter number: "));
    result = CheckBit(no,pos1,pos2);
    print(result);

if __name__ == "__main__":
    main();