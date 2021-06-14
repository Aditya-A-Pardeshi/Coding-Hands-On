'''
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator
IP: 00000000000000000000011100110000 - 1840
OP: 5
IP: 11110000000000000000011100111111 - 4026533695
OP: 13
'''

def CountOnBits(num):
    iCnt = 0;
    for i in range(1,33):
        if((num & (1 << (i - 1))) == (1 << (i - 1))):
            iCnt = iCnt+1;
    return iCnt;

def main():
    no = int(input("Enter number: "));
    result = CountOnBits(no);
    print(result);

if __name__ == "__main__":
    main();