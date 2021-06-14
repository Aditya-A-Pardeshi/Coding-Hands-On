/*
Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input : "Hemalata Choudhary" 
Output : "HemalataChoudhary"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void RemoveWhitespace(char src[],char dest[])
{
	while(*src != '\0')
	{
		if(*src != ' ')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	RemoveWhitespace(str1,str2);
	
	cout<<str2;
	
	return 0;
}