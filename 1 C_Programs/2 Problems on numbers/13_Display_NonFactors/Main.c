/*
Problem Statement:
Write a program which accept number from user and display all its non factors
Input : 12
Output : 5 7 8 9 10 11 
*/

#include<stdio.h>

void NonFactors(int iNo)
{
	//variable for loop counter
	int i = 0;
	for(i=2;i<=iNo;i++)
	{
		if(iNo%i != 0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	NonFactors(iNo);
	
	return 0;
}
