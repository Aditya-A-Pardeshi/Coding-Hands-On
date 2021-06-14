/*
Write a program which accept number from user and print its factors in decreasing order
Input : 12
Output : 6 4 3 2 1
*/

#include<iostream>
using namespace std;

void PrintFactors(int iNum)
{
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	
	for(int i=iNum/2;i>0;i--)
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
	int iNo = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//Call to function
	PrintFactors(iNo);
	
	return 0;
}