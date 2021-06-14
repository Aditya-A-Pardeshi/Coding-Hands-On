/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output : 
*/

#include<stdio.h>

void DisplayCharacters(char ch)
{
	char i = '\0';
	if((ch>='A') && (ch<='Z'))
	{
		for(i=ch;i<='Z';i++)
		{
			printf("%c ",i);
		}
	}
	else if((ch>='a') && (ch<='z'))
	{
		for(i=ch;i>='a';i--)
		{
			printf("%c ",i);
		}
	}
	else
	{
		printf("%c\n",ch);
	}
}

int main()
{
	char ch = '\0';
	
	printf("Enter character: \n");
	scanf("%c",&ch);
	
	DisplayCharacters(ch);
}