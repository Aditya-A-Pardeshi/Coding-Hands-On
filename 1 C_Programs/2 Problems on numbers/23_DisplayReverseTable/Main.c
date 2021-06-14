/*
Problem Statement: Write a program which accept number from user and display its table in reverse order
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2 
*/

#include<stdio.h>

void DisplayReverseTable(int iNo)
{
	int i = 0;
	for(i=10;i>=1;i--)
	{
		printf("%d ",iNo*i);
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	DisplayReverseTable(iNum);
	
	return 0;
}