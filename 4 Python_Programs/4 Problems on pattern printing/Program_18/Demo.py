'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :
 1 2 3 4
 5 6 7 8
 9 1 2 3
 4 5 6 7 
'''

def Display(row,col):
    no = 1;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(row,0,-1):    
        for j in range(0,col):
            if(no == 10):
                no = 1;
            print(no,end = " ");
            no = no + 1;
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();