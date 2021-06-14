/*
Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ * 
*/
#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i=0;i<iNum;i++)
	{
		cout<<"$ "<<"* ";
	}
	cout<<"\n";
}

int main()
{
	int iNo = 0;
	cout<<"Enter number:\n";
	cin>>iNo;
	
	Display(iNo);
	
	return 0;
}