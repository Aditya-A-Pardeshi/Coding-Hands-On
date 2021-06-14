'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output :
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1 
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(row,0,-1):
        for j in range(col,0,-1):
            print("{} ".format(j),end = " ");
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();