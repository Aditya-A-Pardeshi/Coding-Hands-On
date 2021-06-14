/*
"Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35 
Output : 24 26 28 30 32 34 
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2 "
*/

#include<iostream>
using namespace std;

void DisplayEven(int iStart, int iEnd)
{
	if(iStart>iEnd)
	{
		cout<<"Invalid range\n";
		return;
	}
	
	for(int i=iStart;i<=iEnd;i++)
	{
		if(i%2 == 0)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	int iStart = 0;
	int iEnd = 0;
	
	cout<<"Enter start range:\n";
	cin>>iStart;
	
	cout<<"Enter end range:\n";
	cin>>iEnd;
	
	DisplayEven(iStart,iEnd);
	
	return 0;
}