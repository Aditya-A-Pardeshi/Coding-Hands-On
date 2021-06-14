/*
Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F 
*/

#include<iostream>
using namespace std;

void DisplayPattern(int iNum)
{
	static char ch = 'A';
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