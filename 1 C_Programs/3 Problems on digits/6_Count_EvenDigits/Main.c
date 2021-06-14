/*
Problem Statement: Write a program which accept number from user and return the count of even digits
Input : 2395
Output : 1
Input : 1018
Output : 2 
*/

#include<stdio.h>

int CountEven(int iNum)
{
	int iCnt = 0;
	while(iNum != 0)
	{
		if((iNum%10)%2 == 0)
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
	
	iCnt = CountEven(iNo);
	printf("%d",iCnt);
	
	return 0;
}