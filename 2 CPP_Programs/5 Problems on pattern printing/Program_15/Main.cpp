/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output :
 A A A A A
 B B B B B
 C C C C C
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	char ch = '\0';
	
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	ch = 'A';
	for(int i=1;i<=iRow;i++)
	{
		for(int j=1;j<=iCol;j++)
		{
			cout<<ch<<" ";
		}
		ch++;
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