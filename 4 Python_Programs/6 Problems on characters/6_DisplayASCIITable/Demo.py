'''
Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255
'''

def DisplayASCII():
    for i in range(0,256):
        print("ASCII: {}    Hexadecimal: {}    Octal: {}    Character: {}".format(i,hex(i),oct(i),chr(i)));

def main():
    DisplayASCII();


if __name__ == "__main__":
    main();