/*
Problem Statement: Write a program which accept number from user and return multiplication of all digits
Input : 2395
Output : 270
Input : 1018
Output : 8
*/

#include<stdio.h>

int MultiplyDigits(int iNo)
{
	int iResult = 1;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		if(iNo%10 != 0)
		{
			iResult = iResult*(iNo%10);
		}
		iNo = iNo/10;
	}
	return iResult;
}

int main()
{
	int iNum = 0;
	int iAns = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iAns = MultiplyDigits(iNum);
	printf("%d\n",iAns);
	
	return 0;
}