/*
Write a program which accept one number from user and check whether
9th or 12th bit is on or off
iNum1: 1011100110000 - 5936
OP: TRUE
iNum1: 1011000110000 - 5680
OP: FALSE
iNum1: 1111100110000 - 7984
OP: TRUE
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define FALSE 0
#define TRUE 1

BOOL CheckBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = 0x00000001;
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
	UINT iPos1 = 9;
	UINT iPos2 = 12;
	BOOL bResult1 = FALSE;
	BOOL bResult2 = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;

	
	bResult1 = CheckBit(iNum,iPos1);
	bResult2 = CheckBit(iNum,iPos2);
	
	if((bResult1 == TRUE) || (bResult2 == TRUE))
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}