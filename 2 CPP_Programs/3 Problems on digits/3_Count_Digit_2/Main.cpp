/*
"Write a program which accept number from user and count frequency of 2 in it
Input : 2395
Output : 1
Input : 1018
Output : 0 "
*/

#include<iostream>
using namespace std;

int CountTwo(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if(iNo%10 == 2)
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
	
	iCount = CountTwo(iNum);
	cout<<iCount<<"\n";
	
	return 0;
}