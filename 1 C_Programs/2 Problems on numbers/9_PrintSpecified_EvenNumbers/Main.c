/*
Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14 
*/

#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 2;
	
	//Filter to handle negative numbers
	if(iNo<0)
	{
		return;
	}
	
	while(iNo > 0)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
			iNo--;
		}
		i++;
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	PrintEven(iNum);
	
	return 0;
}