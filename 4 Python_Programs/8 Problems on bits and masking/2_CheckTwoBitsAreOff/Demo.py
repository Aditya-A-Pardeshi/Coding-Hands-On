'''
Write a program which checks whether 5th & 18th bit is On or OFF
Input: 464214 (1110001010101010110)
Output: True
'''
def CheckBit(num,pos):
    mask = 0x00000001;
    mask = mask<<(pos-1);
    if(num & mask == mask):
        return True;
    else:
        return False;    
    
def main():
    pos1 = 5;
    pos2 = 18;
    no = int(input("Enter number: "));
    result1 = CheckBit(no,pos1);
    result2 = CheckBit(no,pos2);
    if(result1 == True and result2 == True):
        print("TRUE");
    else:
        print("FALSE")

if __name__ == "__main__":
    main();