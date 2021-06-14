'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output :
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9 
'''

def Display(row,col):
    no = 1;
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(row,0,-1): 
        if(i%2 == 0):
            no = 2;
        else:
            no = 1;
        for j in range(0,col):
            print(no,end = " ");
            no = no+2;
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();