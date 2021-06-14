/*
Problem Statement: Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.
*/

#include<stdio.h>

int main()
{
	int iNo = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	if(iNo<10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
	
	return 0;
}