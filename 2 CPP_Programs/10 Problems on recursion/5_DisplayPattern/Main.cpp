/*
Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/

#include<iostream>
using namespace std;

void DisplayPattern(int iNum)
{
	static char ch = 'a';
	if(iNum != 0)
	{
		iNum--;
		DisplayPattern(iNum);
		cout<<ch<<" ";
		ch++;
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