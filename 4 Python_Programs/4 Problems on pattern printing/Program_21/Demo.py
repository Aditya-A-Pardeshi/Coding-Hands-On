'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output :
  1  2  3  4  5
 -1 -2 -3 -4 -5
  1  2  3  4  5
 -1 -2 -3 -4 -5
  1  2  3  4  5 
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1): 
        for j in range(1,col+1):
            if(i%2 != 0):
                print(" {}".format(j),end = " ");
            else:
                print(-j,end = " ");
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();