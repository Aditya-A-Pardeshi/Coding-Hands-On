/*
Write a program which checks whether 15th bit is On or OFF
Input - 21509 (00000000000000000101010000000101)
Output TRUE
iNo  0000 0000 0000 0000 0101 0100 0000 0101
Mask 0000 0000 0000 0000 0100 0000 0000 0000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	iMask = iMask<<(iPos-1);
	if((iNo & iMask) == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT iNum = 0;
	int iPos = 15;
	BOOL bResult = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = CheckBit(iNum,iPos);
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}