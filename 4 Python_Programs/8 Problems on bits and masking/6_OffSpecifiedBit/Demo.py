'''
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number
Input:  5977 (1011101011001)
Mask:         1111110111111
Output: 5913 (1011100011001)
'''
def OffBit(num,pos):
    return (num & ~(1 << (pos-1)));
    
def main():
    pos = 7;
    no = int(input("Enter number: "));
    result = OffBit(no,pos);
    print(result);

if __name__ == "__main__":
    main();