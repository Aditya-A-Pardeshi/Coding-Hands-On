/*
2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24 
*/
#include<stdio.h>

int SumDigits(int iNo)
{
	static int ans = 0;
	if(iNo != 0)
	{
		ans = ans + (iNo%10);
		iNo = iNo/10;	
		SumDigits(iNo);
	}
	return ans;
}

int main()
{
	int iNum = 0;
	int iSum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iSum = SumDigits(iNum);
	printf("%d",iSum);
	
	return 0;
}