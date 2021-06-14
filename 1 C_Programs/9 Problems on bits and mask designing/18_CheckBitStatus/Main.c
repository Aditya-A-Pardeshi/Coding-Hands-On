/*
Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
Input : 257
Output : TRUE 
iMask1: 0000 0000 0000 0000 0000 0001 0000 0000 
0X00000100
iMask2: 0000 0000 0000 0000 0000 1000 0000 0000 
0X00000800
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
	int iMask1 = 0X00000100;
	int iMask2 = 0X00000800;
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
	BOOL bRet = FALSE;
	
	printf("Enter a number: \n");
	scanf("%d",&iNum);
	
	bRet = CheckBit(iNum);
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