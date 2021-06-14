/*
Problem Statement: Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17
*/

#include<stdio.h>

void PrintOdd(int iNo)
{
	int i = 0;
	for(i=1;i<=iNo;i++)
	{
		if(i%2 != 0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	PrintOdd(iNum);
	
	return 0;
}