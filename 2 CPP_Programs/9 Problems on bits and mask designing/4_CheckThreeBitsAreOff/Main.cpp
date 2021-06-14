/*
Write a program which checks whether 7th & 8th & 9th bit is On or OFF
Input - 16832 (00000000000000000100000111000000)
Output TRUE

Mask 0000 0000 0000 0000 0000 0001 1100 0000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask = 0x000001C0;
	
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
	BOOL bResult = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = CheckBit(iNum);
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