/*
Write a recursive program which accept number from user and return
summation of its digits
*/

using namespace std;
#include<iostream>

int SumDigits(int iNo)
{
	static int iAns = 0;
	if(iNo != 0)
	{
		iAns = iAns + (iNo%10);
		iNo = iNo/10;
		SumDigits(iNo);
	}
	return iAns;
}

int main()
{
	int iNum = 0;
	int iSum = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iSum = SumDigits(iNum);
	cout<<iSum;
	
	return 0;
}