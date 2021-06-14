'''
Write a program which accept one number and position from user and ON
that bit. Return modified number
IP: 1840 (11100110000)
iPos = 7
OP: 1904 (11101110000)
'''

def OnBit(no,pos):
    return (no | (1 << (pos - 1)));

def main():
    no = int(input("Enter number: "));
    pos = int(input("Enter position: "));
    result = OnBit(no,pos);
    print(result);

if __name__ == "__main__":
    main();