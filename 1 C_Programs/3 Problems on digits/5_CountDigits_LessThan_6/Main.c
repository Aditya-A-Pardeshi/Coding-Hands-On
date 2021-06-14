/*
Problem Statement: Write a program which accept number from user and count frequency of such a digits which are less than 6
Input : 9440
Output : 3
Input : 96672
Output : 1 
*/

#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if((iNo%10)<6)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iNum = 0;
	int iCnt = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iCnt = CountDigits(iNum);
	printf("%d\n",iCnt);
	
	return 0;
}