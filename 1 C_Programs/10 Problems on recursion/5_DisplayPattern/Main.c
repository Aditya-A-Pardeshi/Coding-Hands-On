/*
5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f 
*/
#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'a';
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