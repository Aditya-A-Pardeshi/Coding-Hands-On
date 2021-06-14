'''
Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range
IP: 7984 - 1111100110000
iStart = 2
iEnd = 7
IP: 7984 - 1111100110000
OP: 8014 - 1111101001110
'''

def ToggleBits(num,iStart,iEnd):
    if((iStart<0) or (iEnd<0) or (iStart>iEnd)):
        print("Invalid position");
        return;
    ans = num;
    for i in range(iStart,iEnd+1):
        ans = ans ^ (1 << (i - 1));
    return ans;

def main():
    no = int(input("Enter number: "));
    iStart = int(input("Enter start position: "));
    iEnd = int(input("Enter end position: "));
    result = ToggleBits(no,iStart,iEnd);
    print(result);

if __name__ == "__main__":
    main();