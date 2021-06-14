'''
Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE
otherwise return FALSE. 
IP: 11100110000 - 1840
iPos = 5
OP = TRUE
iPos = 7
OP = FALSE
'''

def CheckBit(num,pos):
    mask = 1 << (pos - 1);
    if(num & mask == mask):
        return True;
    else:
        return False;

def main():
    no = int(input("Enter number: "));
    pos = int(input("Enter position: "));
    result = CheckBit(no,pos);
    if(result == True):
        print("Bit at position {} is ON".format(pos));
    else:
        print("Bit at position {} is OFF".format(pos));

if __name__ == "__main__":
	main();