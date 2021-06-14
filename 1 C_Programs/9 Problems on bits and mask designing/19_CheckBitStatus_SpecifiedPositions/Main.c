/*
Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo, int iPos1, int iPos2)
{
	int iMask1 = (0X00000001)<<(iPos1-1);
	printf("%d\n",iMask1);
	int iMask2 = (0X00000001)<<(iPos2-1);
	printf("%x\n",iMask2);
	if((iNo&iMask1==iMask1) || (iNo&iMask2==iMask2))
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
	int iPos1 = 0;
	int iPos2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter a number: \n");
	scanf("%d",&iNum);
	
	printf("Enter position1: \n");
	scanf("%d",&iPos1);
	
	printf("Enter position2: \n");
	scanf("%d",&iPos2);
	
	bRet = CheckBit(iNum, iPos1, iPos2);
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}