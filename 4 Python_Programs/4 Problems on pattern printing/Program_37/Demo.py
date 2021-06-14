'''
Accept number of rows and number of columns from user and display below
pattern. 
Input : iRow = 5 iCol = 5
Output :
 1 2 3 4 5
 1 2     5
 1   3   5
 1     4 5
 1 2 3 4 5 
'''

def Display(row,col):
    if (row != col):
        print("Row and column values should be same");
        return;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1):
        for j in range(1,col+1):
            if((j==i)or(j==1)or(j==col)or(i==1)or(i==row)):
                print(j,end = " ");
            else:
                print(" ",end = " ");
        print();


def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);

if __name__ == "__main__":
    main();