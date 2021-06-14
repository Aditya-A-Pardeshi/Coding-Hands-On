/*
Write a recursive program which display below pattern.
Input : 5
Output : * * * * * 
*/

#include<iostream>
using namespace std;

void DisplayPattern(int iNum)
{
	if(iNum != 0)
	{
		cout<<"* ";
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