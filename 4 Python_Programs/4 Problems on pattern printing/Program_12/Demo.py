'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
 1 1 1 1
 2 2 2 2
 3 3 3 3
 4 4 4 4
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1):
        for j in range(0,col):
           print(i,end = " ");
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();