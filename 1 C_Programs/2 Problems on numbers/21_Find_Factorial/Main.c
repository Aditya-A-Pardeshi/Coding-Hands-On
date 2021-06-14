/*
Write a program to find factorial of given number
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1) 
*/

#include<stdio.h>

int FindFactorial(int iNo)
{
	int iAns = 1;
	
	if(iNo == 0)
	{
		return 0;
	}
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 1)
	{
		iAns = iAns * iNo;
		iNo--;
	}
	return iAns;
}

int main()
{
	int iNum = 0;
	int iFact = 0;
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iFact = FindFactorial(iNum);
	printf("Factorial: %d\n",iFact);
	
	return 0;
}