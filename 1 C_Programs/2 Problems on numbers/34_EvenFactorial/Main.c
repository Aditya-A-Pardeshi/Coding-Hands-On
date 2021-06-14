/*
Problem Statement: Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2) 
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iFact = 1;
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
			iFact = iFact*i;
		}
	}
	return iFact;
}

int main()
{
	int iNum = 0;
	int iFact = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iFact = EvenFactorial(iNum);
	printf("Even factorial of %d is %d",iNum,iFact);
	
	return 0;
}