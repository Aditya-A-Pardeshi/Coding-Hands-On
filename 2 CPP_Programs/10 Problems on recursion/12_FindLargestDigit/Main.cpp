/*
Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int LargestDigit(int iNo)
{
	static int iMax = iNo%10;
	if(iNo != 0)
	{
		if(iNo%10 > iMax)
		{
			iMax = iNo%10;
		}
		iNo = iNo/10;
		LargestDigit(iNo);
	}

	return iMax;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = LargestDigit(iNum);
	cout<<iResult;
	
	return 0;
}