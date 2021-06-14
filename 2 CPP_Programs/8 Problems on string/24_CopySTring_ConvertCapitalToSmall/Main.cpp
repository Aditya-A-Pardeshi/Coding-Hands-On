/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : "Hemalata Choudhary"
Output : "hemalata choudhary"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void ConvertToSmall(char src[],char dest[])
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else
		{
			*dest = *src;
		}
		dest++;
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
	
	ConvertToSmall(str1,str2);
	
	cout<<str2;
	
	return 0;
}