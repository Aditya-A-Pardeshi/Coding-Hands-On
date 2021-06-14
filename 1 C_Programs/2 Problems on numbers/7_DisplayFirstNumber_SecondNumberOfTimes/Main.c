/*
Problem Statement: 4. Accept two numbers from user and display first number in second number of times.
*/

#include<stdio.h>

void Display(int iNum1,int iNum2)
{
	int i = 0;
	for(i=0;i<iNum2;i++)
	{
		printf("%d\t",iNum1);
	}
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	
	printf("Enter first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number:\n");
	scanf("%d",&iNo2);
	
	Display(iNo1,iNo2);
	
	return 0;
}