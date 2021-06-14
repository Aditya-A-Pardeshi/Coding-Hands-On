/*
Write a recursive program which accept number from user and return its product of digits.
Input : 523
Output : 30
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int MultiplyDigits(int iNo)
{
	static int iAns = 1;
	if(iNo != 0)
	{
		iAns = iAns * (iNo%10);
		iNo = iNo/10;
		MultiplyDigits(iNo);
	}

	return iAns;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = MultiplyDigits(iNum);
	cout<<iResult;
	
	return 0;
}