/*
Problem Statement: Write a program which accept number from user and print even factors of that number
Input : 24
Output: 2 4 6 8 12
*/

#include<stdio.h>

void EvenFactors(int iNo)
{
	int i = 0;
	
	//updater to handle negative number
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(i=1;i<=iNo/2;i++)
	{
		if((i%2==0) && (iNo%i==0))
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
	
	EvenFactors(iNum);
	
	return 0;
}