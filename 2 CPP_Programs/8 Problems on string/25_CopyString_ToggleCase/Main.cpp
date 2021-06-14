/*
Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : "Hemalata Choudhary"
Output : "hEMALATA cHOUDARY"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void ToggleCase(char src[],char dest[])
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - 32;
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
	
	ToggleCase(str1,str2);
	
	cout<<str2;
	
	return 0;
}