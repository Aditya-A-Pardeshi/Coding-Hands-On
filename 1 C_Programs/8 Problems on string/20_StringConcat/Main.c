/*
Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
Input : "Hemalata"
"Choudhary"
Output : "Hemalata Choudhary"
*/

#include<stdio.h>

void StringConcat(char src[],char dest[])
{
	//go till end of source string
	while(*src != '\0')
	{
		src++;
	}
	
	//Add space
	*src = ' ';
	src++;
	
	//concat strings
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string1:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	printf("Enter string2:\n");
	scanf("%[^\n]s",str2);
	
	//Call function that concats the strings
	StringConcat(str1,str2);
	
	//Display copied string
	printf("%s\n",str1);
	
	return 0;
}