/*
Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16 
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 2;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
		
	while(iNo != 0)
	{
		printf("%d ",i);
		i = i+2;
		iNo--;
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