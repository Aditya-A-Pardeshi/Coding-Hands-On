/*
Problem Statement: Write a program which accept number from user and check whether it contains 0 in it or not
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNum)
{
	BOOL bAns = FALSE;
	
	while(iNum != 0)
	{
		if(iNum%10 == 0)
		{
			bAns = TRUE;
		}
		iNum = iNum/10;
	}
	return bAns;
}

int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	bRet = CheckZero(iNo);
	if(bRet == TRUE)
	{
		printf("It contains zero\n");
	}
	else
	{
		printf("There is no zero");
	}
	
	return 0;
}