/*
Problem Statement: Write a program which accept two numbers and check whether numbers are equal or not
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNum1,int iNum2)
{
	if(iNum1 == iNum2)
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
	int iNo1 = 0;
	int iNo2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number:\n");
	scanf("%d",&iNo2);
	
	bRet = CheckEqual(iNo1,iNo2);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}