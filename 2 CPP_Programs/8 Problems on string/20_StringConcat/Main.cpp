/*
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input : "Today is"
 "a Sunday"
Output : "Today is a Sunday"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void StringConcat(char src[],char dest[])
{
	while(*src != '\0')
	{
		src++;
	}
	
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
	
	//Call to function
	StringConcat(str1,str2);
	cout<<str1<<"\n";
	
	return 0;
}