/*
Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number. 
*/

#include<stdio.h>
typedef unsigned int UINT;
/*
Number     			 0000 0000 0000 0000 0000 0000 0101 0011
1:  				 0000 0000 0000 0000 0000 0000 0000 0001
(7-1)<<1	   	 	 0000 0000 0000 0000 0000 0000 0100 0000
~(7-1<<1)   	 	 1111 1111 1111 1111 1111 1111 1011 1111    iMask1
Number&(~(7-1<<1))   0000 0000 0000 0000 0000 0000 0001 0011
		
					 1111 1111 1111 1111 1111 1101 1111 1111    iMask2
*/

UINT OFFBits(UINT iNum1,int iPos)
{
	UINT iNum2 = 0;
	UINT iMask = 0x00000001;
	iMask = ~(iMask<<(iPos-1));
	iNum2 = iNum1 & iMask;
	return iNum2;
}

int main()
{
	UINT iNo1 = 0;
	UINT iNo2 = 0;
	UINT iPos1 = 7;
	UINT iPos2 = 10;
	
	//Accept number from user
	printf("Enter number:\n");
	scanf("%d",&iNo1);
	
	iNo2 = OFFBits(iNo1,iPos1);
	iNo2 = OFFBits(iNo2,iPos2);
	printf("Modified Number: %d\n",iNo2);
	
	return 0;
}