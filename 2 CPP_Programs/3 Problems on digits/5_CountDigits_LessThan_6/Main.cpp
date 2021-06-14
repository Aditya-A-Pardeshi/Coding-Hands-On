/*
Write a program which accept number from user and count frequency of such a digits which are less than 6
Input : 9440
Output : 3
Input : 96672
Output : 1 
*/

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if(iNo%10 < 6)
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
	
	iCount = CountDigits(iNum);
	cout<<iCount<<"\n";
	
	return 0;
}