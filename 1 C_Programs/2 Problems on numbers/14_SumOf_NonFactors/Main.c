/*
Problem Statement: Write a program which accept number from user and return summation of all its non factors
Input : 12
Output : 50
Input : 10
Output : 37 
*/

#include<stdio.h>

int SumNonFactors(int iNo)
{
	int iAns = 0;
	int i = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i != 0)
		{
			iAns = iAns+i;
		}
	}
	return iAns;
}

int main()
{
	int iNum = 0;
	int iSum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iSum = SumNonFactors(iNum);
	printf("Sum of non factors: %d\n",iSum);
	
	return 0;
}
