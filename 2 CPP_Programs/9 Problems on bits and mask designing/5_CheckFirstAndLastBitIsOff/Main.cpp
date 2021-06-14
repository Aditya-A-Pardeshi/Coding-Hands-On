/*
Write a program which checks whether first and last bit is On or OFF
Input - 2147500481 (10000000000000000100000111000001)
Output TRUE

Mask 1000 0000 0000 0000 0000 0000 0000 0001
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask = 0x80000001;
	
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