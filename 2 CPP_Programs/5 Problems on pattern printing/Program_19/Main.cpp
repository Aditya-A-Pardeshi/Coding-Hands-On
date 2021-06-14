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

#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
	int iNo = 0;
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
		if(i%2 != 0)
		{
			iNo = 2;
		}
		else
		{
			iNo = 1;
		}
		for(int j=1;j<=iCol;j++)
		{
			cout<<iNo<<" ";
			iNo = iNo+2;
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