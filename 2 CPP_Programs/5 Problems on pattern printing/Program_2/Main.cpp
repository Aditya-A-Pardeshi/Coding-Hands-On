/*
Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
*/

using namespace std;
#include<iostream>

void Display(int iNo)
{
	for(int i=0;i<iNo;i++)
	{
		cout<<"* ";
	}
	for(int i=0;i<iNo;i++)
	{
		cout<<"# ";
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