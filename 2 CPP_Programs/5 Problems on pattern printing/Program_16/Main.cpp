/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output :
 4 4 4 4 4
 3 3 3 3 3
 2 2 2 2 2
 1 1 1 1 1 
*/

#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	for(int i=iRow;i>=1;i--)
	{
		for(int j=1;j<=iCol;j++)
		{
			cout<<i<<" ";
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