/*
Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
 M
Output : 2
Input : “Marvellous Multi OS”
 W
Output : 0
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int CountCharacter(char arr[], char ch)
{	
	int iCnt = 0;
	while(*arr != '\0')
	{
		if(*arr == ch)
		{
			iCnt++;
		}
		arr++;
	}	
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCnt = 0;
	char ch = '\0';
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	//Accept search character
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	//Call to function
	iCnt = CountCharacter(str,ch);
	cout<<iCnt<<"\n";
	
	return 0;
}