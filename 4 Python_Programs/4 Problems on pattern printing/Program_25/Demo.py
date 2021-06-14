'''
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 5 iCol = 5 
Output :
 $ * * * *
 * $ * * *
 * * $ * *
 * * * $ *
 * * * * $
'''

def Display(row,col):
    if (row != col):
        print("Row and column values should be same");
        return;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(0,row,):
        for j in range(0,col):
            if(j==i):
                print("$ ",end = " ");
            else:
                print("* ",end = " ");
        print();


def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);

if __name__ == "__main__":
    main();