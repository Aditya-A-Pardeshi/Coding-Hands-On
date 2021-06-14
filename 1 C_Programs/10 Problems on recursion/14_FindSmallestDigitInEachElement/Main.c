/*
4. Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3 
*/
#include<stdio.h>

int SmallestDigit(int iNo)
{
	static int ans = 9;
	if(iNo != 0)
	{
		if(iNo%10 < ans)
		{
			ans = iNo%10;
		}
		iNo = iNo/10;
		SmallestDigit(iNo);
	}
	return ans;	
}

int main()
{
	int iNum = 0;
	int iMin = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iMin = SmallestDigit(iNum);
	printf("%d\n",iMin);
	
	return 0;
}
