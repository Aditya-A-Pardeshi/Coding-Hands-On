/*
Write a recursive program which accept number from user and return smallest digit
Input : 87983
Output : 3
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int LargestSmallest(int iNo)
{
	static int iMin = iNo%10;
	if(iNo != 0)
	{
		if(iNo%10 < iMin)
		{
			iMin = iNo%10;
		}
		iNo = iNo/10;
		LargestSmallest(iNo);
	}

	return iMin;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = LargestSmallest(iNum);
	cout<<iResult;
	
	return 0;
}