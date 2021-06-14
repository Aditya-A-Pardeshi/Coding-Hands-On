/*
Write a program which accept string from user and replace each occurrence of first character of each word into capital case.
Input : "unix operating system"
Output : "Unix Operating System"
*/
#include<Stdio.h>

void ReplaceCharacter(char str[])
{
	if(str == NULL)
	{
		return;
	}
	if((*str>='a') && (*str<='z'))
	{
		*str = *str-32;
	}
		
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			if((*(str+1)>='a') && (*(str+1)<='z'))
			{
				*(str+1) = *(str+1)-32;
			}
		}
		str++;
	}
}

int main()
{
	char arr[50];
	
	printf("Enter a string: ");
	scanf("%[^\n]s",arr);

	ReplaceCharacter(arr);
	
	printf("%s",arr);
		
	return 0;
}

