/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output :
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9 
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	//Updater for negative value for row and column
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	int i = 0;
	int j = 0;
	int iNo = 0;
	for(i=1;i<=iRow;i++)
	{
		if(i%2==0)
		{
			iNo = 1;
		}
		else
		{
			iNo = 2;
		}
		
		for(j=1;j<=iCol;j++)
		{
			printf("%d ",iNo);
			iNo = iNo+2;
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