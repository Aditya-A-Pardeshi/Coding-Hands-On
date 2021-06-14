/*
Accept one number from user and print that number of * on screen. 
*/

#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	for(i=0;i<iNo;i++)
	{
		printf("* ");
	}
}

int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	Display(iNum);
	
	return 0;
}