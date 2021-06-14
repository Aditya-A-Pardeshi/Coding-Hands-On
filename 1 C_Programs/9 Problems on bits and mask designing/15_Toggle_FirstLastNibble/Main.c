/*
Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits) 
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
iMask:  			 0000 0000 0000 0000 0000 0000 0000 1111

Number | iMask       0000 0000 0000 0000 0000 0000 0101 1111
*/
#include<stdio.h>

unsigned int ToggleNibble(unsigned iNum)
{
	unsigned iResult = 0;
	unsigned iMask = 0XF000000F;
			
	iResult = iNum ^ iMask;
	return iResult;
}

int main()
{
	unsigned int iNum = 0;
	unsigned int iResult = 0;
		
	printf("Enter a number: ");
	scanf("%d",&iNum);
	
	iResult = ToggleNibble(iNum);	
	
	printf("%d",iResult);
	
	return 0;
}