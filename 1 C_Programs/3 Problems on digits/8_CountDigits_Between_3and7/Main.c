/*
Problem Statement: Write a program which accept number from user and return the count of digits in between 3 and 7
Input : 2395
Output : 1
Input : 1018
Output : 0 
*/
#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		if((iNo%10 > 3) && (iNo%10 < 7))
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}


int main()
{
	int iNum = 0;
	int iCnt = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iCnt = CountDigits(iNum);
	printf("%d\n",iCnt);

	return 0;
}