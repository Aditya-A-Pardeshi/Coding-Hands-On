/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 5 iCol = 5 
Output :
 $ * * * *
 * $ * * *
 * * $ * *
 * * * $ *
 * * * * $
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	//filter for unequal rows and columns
	if(iRow!=iCol)
	{
		printf("Enter same value for row and columns\n");
		return;
	}
	
	//updater for negative row and column
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
			if(j==i)
			{
				printf("$ ");
			}
			else
			{
				printf("* ");
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