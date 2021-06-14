'''
Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number

IP: 2042 (11111111010)
OP:	1978 (11110111010)
IP: 1978 (11110111010)
OP:	2042 (11111111010)
'''

def ToggleBit(num,pos):
    return (num ^ (1 << (pos - 1)));


def main():
    no = int(input("Enter number: "));
    pos = 7;
    result = ToggleBit(no,pos);
    print(result);

if __name__ == "__main__":
    main();