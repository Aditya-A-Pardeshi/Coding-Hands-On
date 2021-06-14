/*
Write a program which accept number from user and print even factors of that number
Input : 24
Output: 2 4 6 8 12
*/

#include<iostream>
using namespace std;

void DisplayEvenFactors(int iNum)
{
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	for(int i=2;i<=iNum/2;i++)
	{
		if(iNum%i == 0)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	int iNum = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNum;
	
	//call to function
	DisplayEvenFactors(iNum);
	
	return 0;
}