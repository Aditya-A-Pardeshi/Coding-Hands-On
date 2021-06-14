/*
Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 * 
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
		
	for(i=1;i<=iNo;i++)
	{
		printf("%d * ",i);
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