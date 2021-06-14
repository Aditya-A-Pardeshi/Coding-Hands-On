/*
4. Write a recursive program which accept number from user and return its
factorial.
Input : 5

Output : 120 
*/
#include<stdio.h>

int FindFactorial(int iNo)
{
	static int fact = 1;
	if(iNo != 1)
	{
		fact = fact * iNo;
		iNo--;
		FindFactorial(iNo);
	}
	return fact;
}

int main()
{
	int iNum = 0;
	int iRet = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iNum);
	
	iRet = FindFactorial(iNum);
	printf("%d\n",iRet);
	
	return 0;
}
