/*
Problem Statement: Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
*/

#include<stdio.h>

void DisplayRange(int iStart, int iEnd)
{
	//filter for invalid range
	if(iStart>iEnd)
	{
		printf("Invalid range\n");
		return;
	}
	int i = 0;
	for(i = iStart;i<=iEnd;i++)
	{
		printf("%d ",i);
	}
}

int main()
{
	int iStart = 0;
	int iEnd = 0;
	
	printf("Enter start of range:\n");
	scanf("%d",&iStart);
	
	printf("Enter end of range:\n");
	scanf("%d",&iEnd);
	
	DisplayRange(iStart,iEnd);
	
	return 0;
}