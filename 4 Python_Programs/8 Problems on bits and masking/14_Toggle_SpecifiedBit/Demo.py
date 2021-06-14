'''
Write a program which accept one number and position from user and
toggle that bit. Return modified number
IP: 1840 (11100110000)
Pos: 5
OP: 1824 (11100100000)
IP: 1840 (11100110000)
Pos: 2
OP: 1842 (11100110010)
'''

def ToggleBit(num,pos):
    return (num ^ (1 << (pos - 1)));

def main():
    no = int(input("Enter number: "));
    pos = int(input("Enter position: "));
    result = ToggleBit(no,pos);
    print(result);

if __name__ == "__main__":
    main();
