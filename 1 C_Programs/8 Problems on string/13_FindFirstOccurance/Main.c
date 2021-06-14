/*
Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
Input : "Marvellous Multi OS"
 M
Output : 0
Input : "Marvellous Multi OS"
 W
Output : -1
Input : "Marvellous Multi OS"
 e
Output : 4 
*/

#include<stdio.h>

int FindFirstOccurance(char arr[], char ch)
{
	int iIndex = -1;
	int i = 0;
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
	char ch = '\0';
	int iIndex = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	iIndex = FindFirstOccurance(str,ch);
	printf("Index of first occurance: %d\n",iIndex);
	
	return 0;
}