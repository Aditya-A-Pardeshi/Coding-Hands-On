/*
Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<iostream>
using namespace std;

void DisplayPattern(int iNum)
{
	if(iNum != 0)
	{
		cout<<iNum<<" * ";
		iNum--;
		DisplayPattern(iNum);
	}
	
}

int main()
{
	int iNum = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	DisplayPattern(iNum);
	
	return 0;
}