/*
Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number. 

iMask (1):			 0000 0000 0000 0000 0000 0000 0000 0001
(7-1)<<iMask  	 	 0000 0000 0000 0000 0000 0000 0100 0000
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
------------------------------------------------------------
Number ^ iMask       0000 0000 0000 0000 0000 0000 0001 0011
------------------------------------------------------------																	
*/
#include<stdio.h>

int ToggleBit(int iNum, int iPos)
{
	int iResult = 0;
	int iMask = 0X00000001;
	iMask = iMask<<(iPos-1);
	iResult = iNum ^ iMask;
	return iResult;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	int iPos = 0;
	printf("Enter a number: ");
	scanf("%d",&iNum);
	
	iPos = 7;
	iResult = ToggleBit(iNum, iPos);
		
	iPos = 10;
	iResult = ToggleBit(iResult, iPos);
	printf("%d\n",iResult);

	return 0;
}