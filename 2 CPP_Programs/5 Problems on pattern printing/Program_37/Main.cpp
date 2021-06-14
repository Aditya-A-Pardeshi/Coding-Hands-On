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

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	if(iRow != iCol)
	{
		cout<<"Unequal value for row and column\n";
		return;
	}
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	for(int i=1;i<=iRow;i++)
	{
		for(int j=1;j<=iCol;j++)
		{
			if((i==j) || (i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				cout<<j<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow = 0, iCol = 0;
	
	cout<<"Enter row value:\n";
	cin>>iRow;
	cout<<"Enter column value:\n";
	cin>>iCol;
	
	Display(iRow,iCol);
	
	return 0;
}