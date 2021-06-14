/*
Write a program which accept one number from user and toggle 7th bit of that number. Return modified number. 
*/

#include<stdio.h>
typedef unsigned int UINT;
/*
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
iMask: 				 0000 0000 0000 0000 0000 0000 0100 0000
*/

UINT ToggleBit(UINT iNum1,UINT iPos)
{
	UINT iNum2 = 0;
	UINT iMask = 0x00000001;
	iMask = ~(iMask<<(iPos-1));
	iNum2 = iNum1 ^ iMask;
	return iNum2;
}

int main()
{
	UINT iNo1 = 0;
	UINT iNo2 = 0;
	UINT iPos = 7;
	
	//Accept number from user
	printf("Enter number:\n");
	scanf("%d",&iNo1);
	
	iNo2 = ToggleBit(iNo1,iPos);
	printf("Modified Number: %d\n",iNo2);
	
	return 0;
}