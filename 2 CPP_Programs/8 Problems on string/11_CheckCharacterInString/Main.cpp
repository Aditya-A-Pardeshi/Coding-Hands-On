/*
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
 e
Output : TRUE
Input : “Marvellous Multi OS”
 W
Output : FALSE
*/

using namespace std;
#include<iostream>
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL SearchCharacter(char arr[], char ch)
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
	BOOL bResult = FALSE;
	char ch = '\0';
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	//Accept search character
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	//Call to function
	bResult = SearchCharacter(str,ch);
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}