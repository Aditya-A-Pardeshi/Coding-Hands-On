/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator
IP: 00000000000000000000011100110000 - 1840
OP: 5
IP: 11110000000000000000011100111111 - 4026533695
OP: 13
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT CountOnBit(UINT iNo)
{
	UINT iMask = 0x00000001;
	UINT iCnt = 0;
	
	for(int i=1;i<=32;i++)
	{
		iMask = 0x00000001;
		iMask = iMask<<(i-1);
		if((iNo & iMask) == iMask)
		{
			iCnt++;
		}
	}
	
	return iCnt;
}

int main()
{
	UINT iNum = 0;
	UINT iCount = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iCount = CountOnBit(iNum);
	cout<<iCount;
	
	return 0;
}