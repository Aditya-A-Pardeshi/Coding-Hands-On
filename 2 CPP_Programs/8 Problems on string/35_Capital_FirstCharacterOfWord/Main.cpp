/*
Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.
Input : "unix operating system"
Output : "Unix Operating System"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void CapitalWord(char src[])
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
			//make first character capital
			if((src[i] >= 'a') && (src[i] <= 'z'))
			{
				src[i] = src[i] - 32;
				i++;
			}
			//skip remaining characters
			while((src[i] != ' ') && (i<len))
			{
				i++;
			}
		}
		//if space is found, skip remaining spaces
		else if((src[i] == ' ') && (i<len))
		{
			while((src[i] == ' ') && (i<len))
			{
				i++;
			}
		}		
	}
	
}

int main()
{
	char str[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	CapitalWord(str);
	cout<<str;
	
	return 0;
}