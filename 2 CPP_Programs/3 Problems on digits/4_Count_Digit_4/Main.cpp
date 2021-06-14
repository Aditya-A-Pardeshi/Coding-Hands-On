/*
Write a program which accept number from user and count frequency of 4 in it
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

#include<iostream>
using namespace std;

int CountFour(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if(iNo%10 == 4)
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
	
	iCount = CountFour(iNum);
	cout<<iCount<<"\n";
	
	return 0;
}