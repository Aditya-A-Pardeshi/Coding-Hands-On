/*
5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325 
*/
#include<stdio.h>

int ReverseNumber(int iNo)
{
	static int ans = 0;
	if(iNo != 0)
	{
		ans = (ans*10) + (iNo%10);
		iNo = iNo/10;
		ReverseNumber(iNo);
	}
	return ans;
}

int main()
{
	int iNum = 0;
	int iRev = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iRev = ReverseNumber(iNum);
	printf("%d\n",iRev);
	
	return 0;
}