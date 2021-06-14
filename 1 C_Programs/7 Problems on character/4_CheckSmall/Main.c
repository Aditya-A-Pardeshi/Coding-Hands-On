/*
Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckSmall(char ch)
{
	if((ch>='a') && (ch<='z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter character:\n");
	scanf("%c",&ch);
	
	bRet = CheckSmall(ch);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}