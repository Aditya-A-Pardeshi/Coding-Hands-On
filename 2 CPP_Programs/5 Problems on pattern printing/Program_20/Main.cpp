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

#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
	int iNo = 0;
	char ch = '\0';
	
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
		iNo = 1;
		ch = 'a';
		for(int j=1;j<=iCol;j++)
		{
			if(i%2 != 0)
			{
				cout<<ch<<" ";
				ch++;
			}
			else
			{
				cout<<iNo<<" ";
				iNo++;
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