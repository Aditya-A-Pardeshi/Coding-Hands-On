/*
Write a program which accept string from user and display only
digits from that string.
Input : “Hema123lata78”
Output : 12378
Input : “Demo”
Output : 
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void DisplayDigits(char arr[])
{	
	while(*arr != '\0')
	{
		if((*arr >= '0') && (*arr <= '9'))
		{
			cout<<*arr;
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
	DisplayDigits(str);
	
	return 0;
}