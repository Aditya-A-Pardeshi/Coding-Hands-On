/*
Problem Statement: Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
*/

#include<stdio.h>

int OddFactorial(int iNo)
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
		if(i%2!=0)
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
	
	iFact = OddFactorial(iNum);
	printf("Odd factorial of %d is %d",iNum,iFact);
	
	return 0;
}