/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output :
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1 
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	for(int i=iRow;i>=1;i--)
	{
		for(int j=iCol;j>=1;j--)
		{
			cout<<j<<" ";
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