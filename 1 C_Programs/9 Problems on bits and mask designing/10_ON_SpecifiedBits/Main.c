/*
Write a program which accept one number from user and turn ON its first 4 bits. Return modified number. 
*/

#include<stdio.h>
typedef unsigned int UINT;
//iMask: 1111 0000 0000 0000 0000 0000 0000 0000
//0xF0000000

UINT OFFBits(UINT iNum1)
{
	UINT iMask = 0xF0000000;
	UINT iNum2 = 0;
	UINT iNum2 = iNum1 | iMask;
	return iNum2;
}

int main()
{
	UINT iNo1 = 0;
	UINT iNo2 = 0;
	
	//Accept number from user
	printf("Enter number:\n");
	scanf("%d",&iNo1);
	
	//Call the function
	iNo2 = OFFBits(iNo1);
	//Display the modified number
	printf("Modified Number: %d\n",iNo2);
	
	return 0;
}