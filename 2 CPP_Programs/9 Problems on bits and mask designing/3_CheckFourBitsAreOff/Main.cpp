/*
Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF
Input - 135287876 (00001000000100000101010001000100)
Output TRUE

Mask 0000 1000 0001 0000 0100 0000 0100 0000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask = 0x08104040;
	
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