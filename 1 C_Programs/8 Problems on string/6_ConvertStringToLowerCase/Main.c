/*
Write a program which accept string from user and convert it into lower case.
Input : "Unix OS"
Output : "unix os"
*/

#include<stdio.h>

void ConvertLower(char arr[])
{
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			*arr = *arr + 32;
		}
		arr++;
	}
}

int main()
{
	char str[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	ConvertLower(str);
	printf("Changes string: %s",str);

	return 0;
}