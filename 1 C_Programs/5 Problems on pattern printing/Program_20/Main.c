/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output :
 a b c d e
 1 2 3 4 5
 a b c d e
 1 2 3 4 5
 a b c d e 
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
	char ch = '\0';
	for(i=1;i<=iRow;i++)
	{
		iNo = 1;
		ch = 'a';
		if(i%2!=0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%c ",ch);
				ch++;
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d ",iNo);
				iNo++;
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