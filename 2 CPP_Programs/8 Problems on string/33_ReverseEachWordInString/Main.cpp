/*
Write a program which accept string from user and reverse each
word in place.
Input : "Hemalata Choudhary"
Output : "atalameH yrahduohC"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void ReverseWords(char arr[])
{
	int iWordLen = 0;
	int i = 0,j = 0, k = 0, iStart = 0;
	int len = 0;
	char temp = '\0';
	
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
		if((i<len) && (arr[i] != ' ')) 	//found character, skip further characters
		{
			iStart = i;
			while((i<len) && (arr[i] != ' '))  //traverse till you find space
			{
				i++;
				iWordLen++;
			}
			//reverse word
			for(int j=iStart,k=iStart+iWordLen-1;j<=k;j++,k--)
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
		else if((i<len) && (arr[i] == ' '))	//found space, skip further spaces
		{
			while((i<len) && (arr[i] == ' '))	//traverse till you find character
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
	
	ReverseWords(str);
	cout<<str;
	
	return 0;
}