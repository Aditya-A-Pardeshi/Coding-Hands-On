/*
Problem Statement: Write a program which accept one number from user and check whether that number is greater than 100 or not\
*/

#include <stdio.h>
//creating a typedef
typedef int BOOL;
//creating macros
#define TRUE 1
#define FALSE 0

BOOL CheckNumber(int iNum)
{
	BOOL bRet = FALSE;
	if(iNum>100)
	{
		bRet = TRUE;
	}
	return bRet;
}

int main()
{
	int iNo = 0;
	BOOL bResult = FALSE;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	bResult = CheckNumber(iNo);
	if(bResult == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}