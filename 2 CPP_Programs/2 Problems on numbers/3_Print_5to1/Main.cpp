/*
Program to print 5 to 1 numbers on screen
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i=iNum;i>=1;i--)
	{
		cout<<i<<"\t";
	}
	cout<<"\n";
}

int main()
{
	int iNo = 5;
	
	Display(iNo);
	
	return 0;
}