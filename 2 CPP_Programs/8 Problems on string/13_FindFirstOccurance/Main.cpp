/*
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 0
Input : “Marvellous Multi OS”
 W
Output : -1
Input : “Marvellous Multi OS”
 e
Output : 4
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int FirstOccurance(char arr[], char ch)
{	
	int i = 0;
	int iIndex = -1;
	while(arr[i] != '\0')
	{
		if(arr[i] == ch)
		{
			iIndex = i;
			break;
		}
		i++;
	}	
	return iIndex;
}

int main()
{
	char str[30] = {'\0'};
	int iIndex = 0;
	char ch = '\0';
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	//Accept search character
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	//Call to function
	iIndex = FirstOccurance(str,ch);
	cout<<iIndex<<"\n";
	
	return 0;
}