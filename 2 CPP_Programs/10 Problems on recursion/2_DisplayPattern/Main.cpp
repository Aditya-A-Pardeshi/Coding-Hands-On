/*
Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5 
*/

#include<iostream>
using namespace std;

void DisplayPattern(int iNum)
{
	int temp = 0;
	if(iNum != 0)
	{
		temp = iNum;
		iNum--;
		DisplayPattern(iNum);
		cout<<temp<<" ";
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