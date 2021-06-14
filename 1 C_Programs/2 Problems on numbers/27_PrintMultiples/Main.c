/*
Problem Statement: Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include<stdio.h>

void PrintMultiples(int iNo)
{
	int i = 0;
	for(i=1;i<=5;i++)
	{
		printf("%d ",iNo*i);
	}
}


int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	PrintMultiples(iNum);
	
	return 0;
}
