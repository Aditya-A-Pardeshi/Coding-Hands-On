/*
Problem Statement: Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35 
Output : 24 26 28 30 32 34 
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2 
*/

#include<stdio.h>

void DisplayEvenRange(int iStart, int iEnd)
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
		if(i%2==0)
		{
			printf("%d ",i);
		}
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
	
	DisplayEvenRange(iStart,iEnd);
	
	return 0;
}