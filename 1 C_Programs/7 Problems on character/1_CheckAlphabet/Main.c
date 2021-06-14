/*
Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckAlphabet(char ch)
{
	if(((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')))
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
	
	bRet = CheckAlphabet(ch);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}