/*
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int ReverseDigits(int iNo)
{
	static int iAns = 0;
	if(iNo != 0)
	{
		iAns = (iAns*10) + (iNo%10);
		iNo = iNo/10;
		ReverseDigits(iNo);
	}

	return iAns;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = ReverseDigits(iNum);
	cout<<iResult;
	
	return 0;
}