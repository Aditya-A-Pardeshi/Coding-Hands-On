/*
Write a program which accept number from user and return the count of even digits
Input : 2395
Output : 1
Input : 1018
Output : 2 
*/

#include<iostream>
using namespace std;

int CountEvenDigits(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if((iNo%10)%2 == 0)
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
	
	iCount = CountEvenDigits(iNum);
	cout<<iCount<<"\n";
	
	return 0;
}