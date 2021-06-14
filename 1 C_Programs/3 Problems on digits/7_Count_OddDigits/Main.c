/*
Problem Statement: Write a program which accept number from user and return the count of odd digits
Input : -1018
Output : 2
Input : 8462
Output : 0 
*/

#include<stdio.h>

int CountOdd(int iNum)
{
	int iCnt = 0;
	while(iNum != 0)
	{
		if((iNum%10)%2 != 0)
		{
			iCnt++;
		}
		iNum = iNum/10;
	}
	return iCnt;
}


int main()
{
	int iNum = 0;
	int iCnt = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iCnt = CountOdd(iNum);
	printf("%d\n",iCnt);
	
	return 0;
}