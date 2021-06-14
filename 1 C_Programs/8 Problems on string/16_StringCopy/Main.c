/*
Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
Input : "Unix Operating System"
Output : "Unix Operating System" in another string
*/

#include<stdio.h>

void StringCopy(char src[],char dest[])
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
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
	
	//Call function that copies string into another string
	StringCopy(str1,str2);
	
	//Display copied string
	printf("%s\n",str2);
	
	return 0;
}