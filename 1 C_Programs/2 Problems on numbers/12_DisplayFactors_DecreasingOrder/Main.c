/*
Problem Statement: Write a program which accept number from user and display its factors in decreasing order
Input : 12
Output : 6 4 3 2 1
Input : 13
Output : 1
Input : 10
Output : 5 2 1 
*/

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int i = 0;
	
	//updater to handle negative number
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(i=iNo/2;iNo>0;i--)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	DisplayFactors(iNum);
	
	return 0;
} 