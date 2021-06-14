/*
Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckDigit(char ch)
{
	if((ch>='0') && (ch<='9'))
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
	
	bRet = CheckDigit(ch);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}