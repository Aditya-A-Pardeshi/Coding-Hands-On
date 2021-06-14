/*
Problem Statement: Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2) 
*/

#include<stdio.h>

int FindDiff(int iNo)
{
	int iSumEven = 0;
	int iSumOdd = 0;
	int iDigit = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if(iDigit%2 == 0)
		{
			iSumEven = iSumEven + iDigit;
		}
		else
		{
			iSumOdd = iSumOdd + iDigit;
		}
		iNo = iNo/10;
	}
	return (iSumEven - iSumOdd);
}

int main()
{
	int iNum = 0;
	int iAns = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iAns = FindDiff(iNum);
	printf("%d\n",iAns);
	
	return 0;
}