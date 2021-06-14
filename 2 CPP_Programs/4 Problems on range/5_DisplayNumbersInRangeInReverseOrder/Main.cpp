/*
"Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23 
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range"
*/

#include<iostream>
using namespace std;

void DisplayReverse(int iStart, int iEnd)
{
	if(iStart>iEnd)
	{
		cout<<"Invalid range\n";
		return;
	}
	
	for(int i=iEnd;i>=iStart;i--)
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
	
	DisplayReverse(iStart,iEnd);
	
	return 0;
}
