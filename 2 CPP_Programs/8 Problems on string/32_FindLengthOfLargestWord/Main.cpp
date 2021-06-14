/*
Write a program which accept string from user and return length of
largest word.
Input : "I am Hemalata Choudhary"
Output : 9
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int LargestWordLength(char arr[])
{
	int iWordCnt = 0;
	int iWordLen = 0;
	int iMax = 0;
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
		iWordLen = 0;
		if((i<len) && (arr[i] != ' ')) 	//found character
		{
			iWordCnt++;
			while((i<len) && (arr[i] != ' '))  //traverse till you find space
			{
				i++;
				iWordLen++;
			}
			if(iWordLen>iMax)
			{
				iMax = iWordLen;
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
	return iMax;
}

int main()
{
	char str[30] = {'\0'};
	int iCount = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	iCount = LargestWordLength(str);
	cout<<iCount;
	
	return 0;
}