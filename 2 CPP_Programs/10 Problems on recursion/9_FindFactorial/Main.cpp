/*
Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int FindFactorial(int iNo)
{
	static int iAns = 1;
	if(iNo != 0)
	{
		iAns = iAns * iNo;
		iNo--;
		FindFactorial(iNo);
	}

	return iAns;
}

int main()
{
	int iNum = 0;
	int iFact = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	if(iNum == 0)
	{
		return 0;
	}
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	iFact = FindFactorial(iNum);
	cout<<iFact;
	
	return 0;
}