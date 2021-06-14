/*
Accept number of rows and number of columns from user and display below
pattern. 
Input : iRow = 5 iCol = 5
Output :
 1 2 3 4 5
 1 2     5
 1   3   5
 1     4 5
 1 2 3 4 5 
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	//Filter for unequal number of rows and columns
	if(iRow != iCol)
	{
		printf("Enter same value for rows and columns\n");
		return;
	}
	
	//Updater for negative row or column
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j) || (i==1) || (i==iRow)|| (j==1) || (j==iCol))
			{
				printf("%d ",j);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iRow = 0;
	int iCol = 0;
	
	printf("Enter number of rows:\n");
	scanf("%d",&iRow);
	
	printf("Enter number of columns:\n");
	scanf("%d",&iCol);
	
	DisplayPattern(iRow,iCol);
	
	return 0;
}