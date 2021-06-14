/*
Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.
Input : "She is    a   good girl"
Output : "She is a good girl"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void RemoveExtraWhitespaces(char src[],char dest[])
{
	int i = 0;
	int len = 0;
	//find length of source string
	while(src[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	//navigate till end of string
	while(i<len)
	{
		//if character is found
		if(src[i] != ' ')
		{
			while((src[i] != ' ') && (i<len))
			{
				*dest = src[i];
				i++;
				dest++;
			}
		}
		//if space is found
		else if((src[i] == ' ') && (i<len))
		{
			*dest = src[i];
			dest++;
			while((src[i] == ' ') && (i<len))
			{
				i++;
			}
		}		
	}
	
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	RemoveExtraWhitespaces(str1,str2);
	cout<<str2;
	
	return 0;
}