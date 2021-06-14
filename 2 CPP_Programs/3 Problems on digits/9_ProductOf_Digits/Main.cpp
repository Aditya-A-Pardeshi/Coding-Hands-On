/*
Write a program which accept number from user and return multiplication of all digits
Input : 2395
Output : 270
Input : 1018
Output : 8
*/

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
	int iAns = 1;
	while(iNo != 0)
	{
		if(iNo%10 != 0)
		{
			iAns = iAns * (iNo%10);
		}
		iNo = iNo/10;
	}
	return iAns;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = CountDigits(iNum);
	cout<<iResult<<"\n";
	
	return 0;
}