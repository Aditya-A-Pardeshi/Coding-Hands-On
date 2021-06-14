/*
Write a program which accept string from user count number of
words from string
Input : " this is a good girl "
Output : 5
Input : "this is a good girl`"
Output : 5
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int CountWords(char arr[])
{
	int iWordCnt = 0;
	int i = 0;
	int len = 0;
	
	//find length of string
	while(arr[i] != '\0')
	{
		len++;
		i++;
	}
	
	//navigate till end of string
	i = 0;
	while(i<len)
	{
		if((i<len) && (arr[i] != ' ')) 	//found character
		{
			iWordCnt++;
			while((i<len) && (arr[i] != ' '))  //traverse till you find space
			{
				i++;
			}
		}
		else if((i<len) && (arr[i] == ' '))	//found space
		{
			while((i<len) && (arr[i] == ' '))	//traverse till you find character
			{
				i++;
			}
		}
	}
	return iWordCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCount = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	iCount = CountWords(str);
	cout<<iCount;
	
	return 0;
}