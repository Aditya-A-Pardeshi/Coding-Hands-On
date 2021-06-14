/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 
 * * *
 * * *
 * * *
 * * * 
*/

using namespace std;
#include<iostream>

void Display(int iRow,int iCol)
{
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	for(int i=0;i<iRow;i++)
	{
		for(int j=0;j<iCol;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow = 0;
	int iCol = 0;
	
	cout<<"Enter row:\n";
	cin>>iRow;
	cout<<"Enter column:\n";
	cin>>iCol;
	
	Display(iRow,iCol);
	
	return 0;
}
