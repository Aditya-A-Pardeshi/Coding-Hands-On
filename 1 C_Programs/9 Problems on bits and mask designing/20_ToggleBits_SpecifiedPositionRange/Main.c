/*
Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879. 
No:     0000 0000 0000 0000 0001 1100 1000 0001
iMask:  0000 0000 0000 0000 0001 1111 0000 0000
Result: 0000 0000 0000 0000 0000 0011 1000 0001
iNo:	00000000000000000000001110000001
iMask:	00000000000000000001111100000000
iResult:00000000000000000001110010000001
*/

#include<stdio.h>

int ToggleBits(int iNo, int iStart, int iEnd)
{
	int iResult = 0;
	int iMask = 0X00000000;
	int i = 0;
	for (i=iEnd;i>=iStart;i--)
	{
		iMask = (iMask | 1<<(i-1));
	}
	printf("%d\n",iMask);
	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	int iNum = 0;
	int iStart = 0;
	int iEnd = 0;
	int iResult = 0;
	
	printf("Enter a number: \n");
	scanf("%d",&iNum);
	
	printf("Enter start range: \n");
	scanf("%d",&iStart);
	
	printf("Enter end range: \n");
	scanf("%d",&iEnd);
	
	iResult = ToggleBits(iNum, iStart, iEnd);
	printf("%d",iResult);
	
	return 0;
}