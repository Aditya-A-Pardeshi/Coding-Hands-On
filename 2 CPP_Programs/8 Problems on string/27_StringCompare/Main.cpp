/*
Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : "Hemalata Choudhary"
 "Hemalata Choudhary"
Output : TRUE
*/

#include<iostream>
#include<stdio.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StringCompare(char src[],char dest[])
{
	BOOL bAns = TRUE;
	while(*src != '\0')
	{
		if(*src != *dest)
		{
			bAns = FALSE;
			break;
		}
		src++;
		dest++;
	}
	if(*dest != '\0')
	{
		bAns = FALSE;
	}
	return bAns;
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	BOOL bResult = FALSE;
	
	printf("Enter string1:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	printf("Enter string2:\n");
	scanf("%[^\n]s",str2);
	
	fflush(stdin);
	
	bResult = StringCompare(str1,str2);
	if(bResult == TRUE)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
	
	return 0;
}