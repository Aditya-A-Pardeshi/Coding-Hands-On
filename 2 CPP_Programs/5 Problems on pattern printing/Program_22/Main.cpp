/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :
 1 2 3 4
 2 3 4 5
 3 4 5 6
 4 5 6 7
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
		iNo = i;
		for(int j=1;j<=iCol;j++)
		{
			cout<<iNo<<" ";
			iNo++;
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow = 0, iCol = 0;
	
	cout<<"Enter row number:\n";
	cin>>iRow;
	cout<<"Enter column value:\n";
	cin>>iCol;
	
	Display(iRow,iCol);
	
	return 0;
}