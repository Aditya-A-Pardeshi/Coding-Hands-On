/*
Write a program which accept two numbers from user and display position of common ON bits from that two numbers. 
Input : 10 15 (1010 1111)
Output : 2 4 
*/

#include<stdio.h>

void FindPosition(int iNo1, int iNo2)
{
	int iPos = 1;
	int iMask = 0X00000001;
	while((iNo1!=0) || (iNo2!=0))
	{
		if((iNo1&iMask==1) && (iNo2&iMask==1))
		{
			printf("%d\t",iPos);
		}
		iNo1 = iNo1>>1;
		iNo2 = iNo2>>1;
		iPos++;
	}
}

int main()
{
	int iNum1 = 0, iNum2 = 0;
	
	printf("Enter first number: \n");
	scanf("%d",&iNum1);
	
	printf("Enter second number: \n");
	scanf("%d",&iNum2);
	
	FindPosition(iNum1,iNum2);
	
	return 0;
}