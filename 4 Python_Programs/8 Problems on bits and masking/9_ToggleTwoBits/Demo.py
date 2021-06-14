'''
Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number

IP: 2042 (11111111010)
OP:	1466 (10110111010)
IP: 1466 (10110111010)
OP:	2042 (11111111010)
'''

def ToggleBit(num,pos1,pos2):
    ans = num ^ (1 << (pos1 - 1));
    ans = ans ^ (1 << (pos2 - 1));
    return ans;

def main():
    no = int(input("Enter number: "));
    pos1 = 7;
    pos2 = 10;
    result = ToggleBit(no,pos1,pos2);
    print(result);

if __name__ == "__main__":
    main();