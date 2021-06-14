/*
Problem Statement: Write a program which accept number from user and display its digits in reverse order
*/

#include<stdio.h>

int ReverseDigits(int iNum)
{
	int iAns = 0;
	int iDigit = 0;
	while(iNum != 0)
	{
		iDigit = iNum%10;
		iAns = (iAns*10) + iDigit;
		iNum = iNum/10;
	}
	return iAns;
}

int main()
{
	int iNo = 0;
	int iRev = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	iRev = ReverseDigits(iNo);
	printf("%d",iRev);
	
	return 0;
}