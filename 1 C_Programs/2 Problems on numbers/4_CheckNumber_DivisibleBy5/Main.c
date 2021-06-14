/*
Accept one number and check whether it is divisible by 5 or not. 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 0
#define FALSE 1

BOOL CheckDivisibility(int iNo)
{
	if(iNo%5==0)
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
	int iNum = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	bRet = CheckDivisibility(iNum);
	if(bRet == TRUE)
	{
		printf("%d is divisible by 5\n",iNum);
	}
	else
	{
		printf("%d is not divisible by 5\n",iNum);
	}
	
	return 0;
}