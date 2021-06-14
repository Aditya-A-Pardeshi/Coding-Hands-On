'''
Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number
Mask 1111 1111 1111 1111 1111 1101 1011 1111
IP:  2042 (11111111010)
OP:  1466 (10110111010)
'''

def OffBit(num,pos1,pos2):
    ans = num & (~(1 << (pos1 - 1)));
    ans = ans & (~(1 << (pos2 - 1)));
    return ans;

def main():
    no = int(input("Enter number: "));
    pos1 = 7;
    pos2 = 10;
    result = OffBit(no,pos1,pos2);
    print(result);

if __name__ == "__main__":
    main();