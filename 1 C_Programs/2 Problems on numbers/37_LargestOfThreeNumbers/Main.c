/*
Problem Statement: Write a program to find largest of three numbers
*/

#include<stdio.h>

int FindLargest(int iNum1, int iNum2, int iNum3)
{
	if((iNum1>=iNum2) && (iNum1>=iNum3))
	{
		return iNum1;
	}
	else if((iNum2>=iNum1) && (iNum2>=iNum3))
	{
		return iNum2;
	}
	else
	{
		return iNum3;
	}
}

int main()
{
	int iNo1 = 0, iNo2 = 0, iNo3 = 0;
	int iResult = 0;
	
	printf("Enter first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number:\n");
	scanf("%d",&iNo2);
	
	printf("Enter third number:\n");
	scanf("%d",&iNo3);
	
	iResult = FindLargest(iNo1,iNo2,iNo3);
	
	printf("Largest Number: %d\n",iResult);
	
	return 0;
}