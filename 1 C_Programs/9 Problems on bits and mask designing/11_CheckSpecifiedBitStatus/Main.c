/*
Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE. 
Input : 10 2
Output : TRUE 
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
iMask:  			 0000 0000 0000 0000 0000 0000 0001 0000

Number & iMask       0000 0000 0000 0000 0000 0000 0001 0000
																				

*/
#include<stdio.h>
typedef int BOOL;
#define FALSE 0
#define TRUE 1

BOOL CheckBit(unsigned iNum, int iPos)
{
	unsigned iResult = 0;
	unsigned iMask = 0X00000001;
	iMask = iMask<<(iPos-1);
	
	iResult = iNum & iMask;
	if(iResult == iMask)
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
	unsigned int iNum = 0;
	BOOL bResult = FALSE;
	int iPos = 0;
	
	printf("Enter a number: ");
	scanf("%d",&iNum);
	
	printf("Enter bit position: \n");
	scanf("%d",&iPos);
	
	bResult = CheckBit(iNum,iPos);	
	if(bResult==TRUE)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
	
	return 0;
}