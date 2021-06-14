/*
Problem Statement: Accept number from user and check whether number is even or odd
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNum)
{
	if(iNum%2==0)
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
	int iNo = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number: \n");
	scanf("%d",&iNo);
	
	bRet = CheckEven(iNo);
	if(bRet==FALSE)
	{
		printf("Odd\n");
	}
	else
	{
		printf("Even\n");
	}
	
	return 0;
}