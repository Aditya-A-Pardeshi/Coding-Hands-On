/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF
IP: 7984 - 1111100110000
iPos1 = 5
iPos2 = 7
*/

#include<iostream>
using namespace std;
typedef int BOOL;
typedef unsigned int UINT;
#define FALSE 0
#define TRUE 1

BOOL CheckBit(int iNo, int iPos)
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
	int iNum = 0;
	int iPos1 = 0;
	int iPos2 = 0;
	BOOL bResult1 = FALSE;
	BOOL bResult2 = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	cout<<"Enter position1:\n";
	cin>>iPos1;
	
	cout<<"Enter position2:\n";
	cin>>iPos2;
	
	bResult1 = CheckBit(iNum,iPos1);
	bResult2 = CheckBit(iNum,iPos2);
	
	if((bResult1 == TRUE) || (bResult2 == TRUE))
	{
		cout<<"ON\n";
	}
	else
	{
		cout<<"OFF\n";
	}
	
	return 0;
}