'''
Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
IP: 123451       (00000000000000011110001000111011)
OP: 4026655284   (11110000000000011110001000110100)
'''

def ToggleFirstLastNibble(num):
    mask = 0xF000000F;
    return (num ^ mask);

def main():
    no = int(input("Enter number: "));
    result = ToggleFirstLastNibble(no);
    print(result);

if __name__ == "__main__":
    main();
