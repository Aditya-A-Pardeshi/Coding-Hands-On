/*
Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 * 
*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
	for(int i=1;i<=iNo;i++)
	{
		cout<<i<<" * ";
	}
	cout<<"\n";
}

int main()
{
	int iNum = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	Display(iNum);
	
	return 0;
}