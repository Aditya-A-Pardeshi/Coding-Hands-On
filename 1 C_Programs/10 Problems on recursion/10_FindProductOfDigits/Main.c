/*
5. Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30 
*/
#include<stdio.h>

int ProductDigits(int iNo)
{
	static int ans = 1;
	if(iNo != 0)
	{
		ans = ans * (iNo%10);
		iNo = iNo/10;	
		ProductDigits(iNo);
	}
	return ans;
}

int main()
{
	int iNum = 0;
	int iSum = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iSum = ProductDigits(iNum);
	printf("%d",iSum);
	
	return 0;
}