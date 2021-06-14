/*
Write a program which accept string from user and copy small characters of that string into another string.
Input : "Unix Operating System"
Output : "nix perating ystem"
*/

#include<stdio.h>

void CopySmall(char src[],char dest[])
{
	while(*src != '\0')
	{
		if((*src>='A') && (*src<='Z'))
		{}
		else
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	//Call function that copies small characters from string into another string
	CopySmall(str1,str2);
	
	//Display copied string
	printf("%s\n",str2);
	
	return 0;
}