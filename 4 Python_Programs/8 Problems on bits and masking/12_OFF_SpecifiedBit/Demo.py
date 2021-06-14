'''
Write a program which accept one number and position from user and off
that bit. Return modified number
IP: 1840 (11100110000)
iPos = 5
OP: 1824 (11100100000)
'''

def OffBit(no,pos):
    mask = ~(1 << (pos - 1));
    return (no & mask);

def main():
    no = int(input("Enter number: "));
    pos = int(input("Enter position: "));
    result = OffBit(no,pos);
    print(result);

if __name__ == "__main__":
	main();