/*
Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
*/

#include<iostream>
using namespace std;

void Display(int iStart, int iEnd)
{
	if(iStart>iEnd)
	{
		cout<<"Invalid range\n";
		return;
	}
	
	for(int i=iStart;i<=iEnd;i++)
	{
		cout<<i<<" ";
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
	
	Display(iStart,iEnd);
	
	return 0;
}