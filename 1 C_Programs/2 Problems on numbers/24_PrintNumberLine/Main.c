/*
Problem Statement: Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4 
*/

#include<stdio.h>

void PrintNumberLine(int iNo)
{
	int i = 0;
	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d ",i);
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	PrintNumberLine(iNum);
	
	return 0;
}
