'''
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
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