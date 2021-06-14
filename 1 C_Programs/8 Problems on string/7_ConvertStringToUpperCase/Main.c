/*
Write a program which accept string from user and convert it into upper case.
Input : "Unix OS"
Output : UNIX OS
*/

#include<stdio.h>

void ConvertUpper(char arr[])
{
	while(*arr != '\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			*arr = *arr - 32;
		}
		arr++;
	}
}

int main()
{
	char str[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	ConvertUpper(str);
	printf("Changes string: %s",str);

	return 0;
}