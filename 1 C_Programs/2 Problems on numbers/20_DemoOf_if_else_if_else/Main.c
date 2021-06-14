/*
Problem Statement: Write a program which accept number from user and if number is less than 50 then print small , 
if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large. 
Input : 75
Output : Medium 
*/

#include<stdio.h>

void FindCategory(int iNo)
{
	if(iNo<50)
	{
		printf("Small\n");
	}
	else if((iNo>=50) && (iNo<=100))
	{
		printf("Medium\n");
	}
	else
	{
		printf("Large\n");
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	FindCategory(iNum);
	
	return 0;
}