/*
Problem Statement: Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : -10 2
Output : Invalid range 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL DisplayEvenRange(int iStart, int iEnd, int *pSum)
{
	//filter for invalid range
	if((iStart>iEnd) || (iStart<0) || (iEnd<0))
	{
		return FALSE;
	}
	
	int i = 0;
	for(i = iStart;i<=iEnd;i++)
	{
		*pSum = *pSum + i;
	}
	return TRUE;
}

int main()
{
	int iStart = 0;
	int iEnd = 0;
	int iSum = 0;
	BOOL bRet = FALSE;
	
	printf("Enter start of range:\n");
	scanf("%d",&iStart);
	
	printf("Enter end of range:\n");
	scanf("%d",&iEnd);
	
	bRet = DisplayEvenRange(iStart,iEnd,&iSum);
	if(bRet == TRUE)
	{
		printf("Sum of numbers in range: %d",iSum);
	}
	else
	{
		printf("Invalid range\n");
	}
	
	return 0;
}