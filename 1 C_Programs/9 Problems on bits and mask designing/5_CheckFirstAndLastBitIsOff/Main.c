/*
Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNum)
{
	//mask: 1000 0000 0000 0000 0000 0000 0000 0001
	UINT iMask = 0x80000001;
	if((iNum & iMask) == iMask)
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
	UINT iNo = 0;
	BOOL bRet = FALSE;
	
	//Accept number from user
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	bRet = CheckBit(iNo);
	if(bRet == TRUE)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
	
	return 0;
}