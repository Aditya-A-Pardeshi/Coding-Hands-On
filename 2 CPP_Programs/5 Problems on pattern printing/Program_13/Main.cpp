/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
 A B C D
 A B C D
 A B C D
 A B C D 
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
	
	for(int i=1;i<=iRow;i++)
	{
		ch = 'A';
		for(int j=1;j<=iCol;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow = 0,iCol = 0;
	
	cout<<"Enter row value:\n";
	cin>>iRow;
	cout<<"Enter column value:\n";
	cin>>iCol;
	
	Display(iRow,iCol);
	
	return 0;
}