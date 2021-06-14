/*
4.Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F 
*/
#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'A';
	if(iNo != 1)
	{
		iNo--;
		Display(iNo);
		printf("%c ",ch);
		ch++;
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