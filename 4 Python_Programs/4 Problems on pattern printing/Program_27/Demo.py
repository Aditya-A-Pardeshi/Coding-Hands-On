'''
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4 
Output :
 1 2 3 4
 1 * * 4
 1 * * 4
 1 2 3 4 
'''

def Display(row,col):
    if (row != col):
        print("Row and column values should be same");
        return;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1,):
        for j in range(1,col+1):
            if((i==1) or (i==row) or (j==1) or (j==col)):
                print(j,end = " ");
            else:
                print("*",end = " ");
        print();


def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);

if __name__ == "__main__":
    main();