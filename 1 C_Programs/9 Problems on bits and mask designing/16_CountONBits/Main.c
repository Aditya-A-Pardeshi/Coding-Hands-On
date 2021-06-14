/*
Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator. 
*/

#include<stdio.h>

int CountOnBits(int iNum)
{
	int iMask = 0X00000001;
	int iCount = 0;
	while(iNum!=0)
	{
		if(iNum&iMask==1)
		{
			iCount++;
		}
		iNum = iNum>>1;
	}
	return iCount;
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	
	printf("Enter a number: \n");
	scanf("%d",&iNum);
	
	iResult = CountOnBits(iNum);
	
	printf("Number of ON bits are %d",iResult);
	
	return 0;
}