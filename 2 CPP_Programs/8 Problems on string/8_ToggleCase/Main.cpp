/*
Write a program which accept string from user and toggle the case.
upper case.
Input : "Hemalata Choudhary"
Output : "hEMALATA cHOUDHARY"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void ToggleCase(char arr[])
{	
	while(*arr != '\0')
	{
		if((*arr >= 'A') && (*arr <= 'Z'))
		{
			*arr = *arr + 32;
		}
		else if((*arr >= 'a') && (*arr <= 'z'))
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
	ToggleCase(str);
	cout<<str<<"\n";
	
	return 0;
}