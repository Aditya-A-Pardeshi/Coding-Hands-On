'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :
 1 2 3 4
 2 3 4 5
 3 4 5 6
 4 5 6 7
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(1,row+1): 
        no = i;
        for j in range(1,col+1):
            print(no,end = " ");
            no = no+1;
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();