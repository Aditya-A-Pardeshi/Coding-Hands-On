/*
Write a program which accept string from user and toggle the case. 
Input : "Unix OS"
Output : uNIX os 
*/

#include<stdio.h>

void ToggleCase(char arr[])
{
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			*arr = *arr + 32;
		}
		else if((*arr>='a') && (*arr<='z'))
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
	
	ToggleCase(str);
	printf("Changes string: %s",str);

	return 0;
}