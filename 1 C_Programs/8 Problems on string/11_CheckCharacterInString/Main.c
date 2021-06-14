/*
Write a program which accept string from user and accept on character. Check whether that character is present in string or not.
Input : "Unix Operating System"
t
Output : TRUE
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char arr[], char ch)
{
	BOOL bAns = FALSE;
	while(*arr != '\0')
	{
		if(*arr == ch)
		{
			bAns = TRUE;
			break;
		}
		arr++;
	}
	return bAns;
}

int main()
{
	char str[30] = {'\0'};
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	bRet = CheckCharacter(str,ch);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}