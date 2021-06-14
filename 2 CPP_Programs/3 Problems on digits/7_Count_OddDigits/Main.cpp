/*
Write a program which accept number from user and return the count of odd digits
Input : -1018
Output : 2
Input : 8462
Output : 0 
*/

#include<iostream>
using namespace std;

int CountOddDigits(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if((iNo%10)%2 != 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iNum = 0;
	int iCount = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iCount = CountOddDigits(iNum);
	cout<<iCount<<"\n";
	
	return 0;
}