/*
Write a program which accept string from user and convert it into
upper case.
Input : "Hemalata Choudhary"
Output : "HEMALATA CHOUDHARY"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void ConvertToUpper(char arr[])
{	
	while(*arr != '\0')
	{
		if((*arr >= 'a') && (*arr <= 'z'))
		{
			*arr = *arr - 32;
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
	ConvertToUpper(str);
	cout<<str<<"\n";
	
	return 0;
}