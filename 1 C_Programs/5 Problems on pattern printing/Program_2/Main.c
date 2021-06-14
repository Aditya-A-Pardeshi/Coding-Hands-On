/*
Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 0;
	for(i=0;i<iNo;i++)
	{
		printf("* ");
	}
	for(i=0;i<iNo;i++)
	{
		printf("# ");
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	DisplayPattern(iNum);
	
	return 0;
}