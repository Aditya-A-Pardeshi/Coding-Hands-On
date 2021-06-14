/*
Problem Statement: Write a program which accept three numbers and print its multiplication
Input : 5 4 7
Output : 140
Input : 5 0 7
Output : 35 
*/

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
	int iResult = 1;
	if(iNo1 != 0)
	{
		iResult = iResult * iNo1;
	}
	if(iNo2 != 0)
	{
		iResult = iResult * iNo2;
	}
	if(iNo3 != 0)
	{
		iResult = iResult * iNo3;
	}
	return iResult;
}

int main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iNum3 = 0;
	int iAns = 0;
	
	printf("Enter number1:\n");
	scanf("%d",&iNum1);
	
	printf("Enter number2:\n");
	scanf("%d",&iNum2);
	
	printf("Enter number3:\n");
	scanf("%d",&iNum3);
	
	iAns = Multiply(iNum1,iNum2,iNum3);
	printf("Answer: %d",iAns);
	
	return 0;
}