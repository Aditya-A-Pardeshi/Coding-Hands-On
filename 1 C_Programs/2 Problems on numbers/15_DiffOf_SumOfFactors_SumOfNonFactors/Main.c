/*
Problem Statement:
Write a program which accept number from user and return difference between summation of all its factors and non factors
Input : 12
Output : -34 (16 - 50) 
Input : 10
Output : -29 (8 - 37) 
*/

#include<stdio.h>

int DiffFactors(int iNum)
{
	int iFact = 0;
	int iNonfact = 0;
	int i = 0;
	
	//Updater for negative number
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	for(i=1;i<iNum;i++)
	{
		if(iNum%i == 0)
		{
			iFact = iFact + i;
		}
		else
		{
			iNonfact = iNonfact + i;
		}
	}
	return (iFact - iNonfact);
}

int main()
{
	int iNo = 0;
	int iResult = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	iResult = DiffFactors(iNo);
	printf("Difference of sum of factors and sum of non factors: %d",iResult);
	
	return 0;
}