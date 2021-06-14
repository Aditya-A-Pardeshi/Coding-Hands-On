/*
Write a program which accept one number and position from user and toggle that bit. Return modified number.
Input : 10 3
Output : 14 
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
iMask:  			 0000 0000 0000 0000 0000 0000 0000 1111

Number | iMask       0000 0000 0000 0000 0000 0000 0101 1111
*/
#include<stdio.h>

unsigned int ToggleBit(unsigned iNum, int iPos)
{
	unsigned iResult = 0;
	unsigned iMask = 0X00000001;
	iMask = iMask<<(iPos-1);
		
	iResult = iNum ^ iMask;
	return iResult;
}

int main()
{
	unsigned int iNum = 0;
	unsigned int iResult = 0;
	int iPos = 0;
	
	printf("Enter a number: ");
	scanf("%d",&iNum);
	
	printf("Enter bit position: \n");
	scanf("%d",&iPos);
	
	iResult = ToggleBit(iNum,iPos);	
	
	printf("%d",iResult);
	
	return 0;
}