/*
Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

void DisplayTable(int iNo)
{
	int i = 0;
	for(i=1;i<=10;i++)
	{
		printf("%d ",iNo*i);
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	DisplayTable(iNum);
	
	return 0;
}