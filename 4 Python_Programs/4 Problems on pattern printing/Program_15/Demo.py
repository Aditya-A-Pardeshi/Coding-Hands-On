'''
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output :
 A A A A A
 B B B B B
 C C C C C
'''

def Display(row,col):
    ch = 65;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1):    
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