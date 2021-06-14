/*
2. Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5 
*/
#include<stdio.h>

void Display(int iNo)
{
	if(iNo != 1)
	{
		iNo--;
		Display(iNo);
		printf("%d ",iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	Display(iValue+1);
	return 0;
}