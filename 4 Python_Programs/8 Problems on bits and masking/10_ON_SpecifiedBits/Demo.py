'''
Write a program which accept one number from user and on its first 4 bits. Return modified number

IP: 2042 (11111111010)
OP:	1466 (11111111111)
IP: 1466 (10000111000)
OP:	2042 (10000111111)
'''

def OnBit(num):
    mask = 0x0000000F;
    return (num | mask);

def main():
    no = int(input("Enter number: "));
    result = OnBit(no);
    print(result);

if __name__ == "__main__":
    main();