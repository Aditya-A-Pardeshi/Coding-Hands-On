/*
Problem Statement: Write a program which accept number from user and count frequency of 2 in it
Input : 2395
Output : 1
Input : 1018
Output : 0 
*/

#include<stdio.h>


int CountTwo(int iNum)
{
	int iCnt = 0;
	while(iNum != 0)
	{
		if((iNum%10) == 2)
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
	
	iCnt = CountTwo(iNo);
	printf("%d\n",iCnt);
	
	return 0;
}