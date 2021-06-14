/*
Write a program which accept one number from user and on its first 4
bits. Return modified number
IP: 11100110000 - 1840
iPos = 5
OP = TRUE
iPos = 7
OP = FALSE
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

UINT CheckBit(UINT iNo, UINT iPos)
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
	UINT iPos = 0;
	UINT bResult = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	cout<<"Enter bit position:\n";
	cin>>iPos;
	
	bResult = CheckBit(iNum,iPos);
	if(bResult == TRUE)
	{
		cout<<"Bit at position "<<iPos<<" is ON\n";
	}
	else
	{
		cout<<"Bit at position "<<iPos<<" is OFF\n";
	}
	
	return 0;
}