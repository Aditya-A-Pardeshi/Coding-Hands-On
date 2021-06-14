/*
Problem Statement: Write a program which accept number from user and count frequency of 4 in it
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

#include<stdio.h>

int CountFour(int iNum)
{
	int iCnt = 0;
	while(iNum != 0)
	{
		if((iNum%10) == 4)
		{
			iCnt++;
		}
		iNum = iNum/10;
	}
	return iCnt;
}

int main()
{
	int iNo = 0;
	int iCnt = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	iCnt = CountFour(iNo);
	printf("%d\n",iCnt);
	
	return 0;
}