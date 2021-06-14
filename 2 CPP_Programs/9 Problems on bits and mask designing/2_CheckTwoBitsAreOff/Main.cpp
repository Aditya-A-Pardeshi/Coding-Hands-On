/*
Write a program which checks whether 5th & 18th bit is On or OFF
Input - 92358981616293 (00000000000000100101010000010101)
Output TRUE
iNo  0000 0000 0000 0010 0101 0100 0001 0101
Mask 0000 0000 0000 0010 0000 0000 0001 0000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBitON(UINT iNo, int iPos)
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
	int iPos1 = 5;
	int iPos2 = 18;
	BOOL bResult1 = FALSE;
	BOOL bResult2 = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult1 = CheckBitON(iNum,iPos1);
	bResult2 = CheckBitON(iNum,iPos2);
	if((bResult1 == TRUE) && (bResult2 == TRUE))
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}