'''
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
 A B C D
 a b c d
 A B C D
 a b c d
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1):
        if(i%2 == 0):
            ch = 97;
        else:
            ch = 65;
        for j in range(0,col):
           print(chr(ch),end = " ");
           ch = ch + 1;
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();