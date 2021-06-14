/*
Write a program which accept string from user and convert it into
lower case.
Input : "Hemalata Choudhary"
Output : "hemalata choudhary"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void ConvertToLower(char arr[])
{	
	while(*arr != '\0')
	{
		if((*arr >= 'A') && (*arr <= 'Z'))
		{
			*arr = *arr + 32;
		}
		arr++;
	}	
}

int main()
{
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	ConvertToLower(str);
	cout<<str<<"\n";
	
	return 0;
}