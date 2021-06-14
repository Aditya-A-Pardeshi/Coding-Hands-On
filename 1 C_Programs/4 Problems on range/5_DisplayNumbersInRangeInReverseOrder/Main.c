/*
Problem Statement: Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23 
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range 
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
	for(i = iEnd;i>=iStart;i--)
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