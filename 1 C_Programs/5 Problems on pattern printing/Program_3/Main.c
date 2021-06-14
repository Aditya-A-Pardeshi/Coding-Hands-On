/*
Accept number from user and display below pattern.
Input : 5
Output : A B C D E 
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	char ch = 'A';
	int i = 0;
	
	if((iNo<0) || (iNo>26))
	{
		return;
	}
		
	for(i=0;i<iNo;i++)
	{
		printf("%c ",ch);
		ch++;
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