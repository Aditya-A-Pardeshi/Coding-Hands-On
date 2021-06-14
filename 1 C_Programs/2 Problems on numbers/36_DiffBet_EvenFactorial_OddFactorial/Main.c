/*
Problem Statement: Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15) 
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
	int iEvenFact = 1;
	int iOddFact = 1;
	int i = 0;
	
	//updater to handle negative number
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(i=2;i<=iNo;i++)
	{
		if(i%2==0)
		{
			iEvenFact = iEvenFact*i;
		}
		else
		{
			iOddFact = iOddFact*i;
		}
	}
	return (iEvenFact-iOddFact);
}

int main()
{
	int iNum = 0;
	int iDiff = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iDiff = FactorialDiff(iNum);
	printf("Difference between even factorial and odd factorial of %d is %d",iNum,iDiff);
	
	return 0;
}