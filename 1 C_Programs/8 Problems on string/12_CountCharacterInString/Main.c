/*
Write a program which accept string from user and accept one character. Return frequency of that character.
Input : "Unix Operating System"
 i
Output : 2
*/

#include<stdio.h>

int CountCharacter(char arr[], char ch)
{
	int iCnt = 0;
	while(*arr != '\0')
	{
		if(*arr == ch)
		{
			iCnt++;
		}
		arr++;
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	char ch = '\0';
	int iCount = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	printf("Enter character to count:\n");
	scanf("%c",&ch);
	
	iCount = CountCharacter(str,ch);
	printf("%d\n",iCount);
	
	return 0;
}