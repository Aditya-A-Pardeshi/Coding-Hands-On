/*
Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number. 
*/

#include<stdio.h>
typedef unsigned int UINT;
/*
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
1:  				 0000 0000 0000 0000 0000 0000 0000 0001
(7-1)<<1	   	 	 0000 0000 0000 0000 0000 0000 0100 0000
~(7-1<<1)   	 	 1111 1111 1111 1111 1111 1111 1011 1111    iMask
Number&(~(7-1<<1))   0000 0000 0000 0000 0000 0000 0001 0011

*/

UINT OFFBits(UINT iNum1,UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = ~(iMask<<(iPos-1));
	UINT iNum2 = iNum1 & iMask;
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
	
	//Call the function
	iNo2 = OFFBits(iNo1,iPos);
	//Display the modified number
	printf("Modified Number: %d\n",iNo2);
	
	return 0;
}