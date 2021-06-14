/*
2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9 
*/
#include<stdio.h>

int LargestDigit(int iNo)
{
	static int ans = 0;
	if(iNo != 0)
	{
		if(iNo%10 > ans)
		{
			ans = iNo%10;
		}
		iNo = iNo/10;
		LargestDigit(iNo);
	}
	return ans;	
}

int main()
{
	int iNum = 0;
	int iMax = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iMax = LargestDigit(iNum);
	printf("%d\n",iMax);
	
	return 0;
}
