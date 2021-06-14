/*
Problem Statement: Write a program which accept number from user and display its multiplication of factors
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)
*/

#include<stdio.h>

int MultiplyFactors(int iNum)
{
	int i = 0;
	int iAns = 1;
	
	//updater to handle negative number
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	for(i=1;i<=iNum/2;i++)
	{
		if(iNum%i==0)
		{
			iAns = iAns*i;
		}
	}
	return iAns;
}

int main()
{
	int iNo = 0;
	int iResult = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	iResult = MultiplyFactors(iNo);
	printf("Result: %d",iResult);
	
	return 0;
}