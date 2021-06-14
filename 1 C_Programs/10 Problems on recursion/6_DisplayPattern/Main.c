/*
1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 * 
*/
#include<stdio.h>
void Display(int iNo)
{
	if(iNo != 0)
	{
		printf("%d * ",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}