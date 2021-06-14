/*
Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void CopyCapital(char src[],char dest[])
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
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
	
	//Call to function
	CopyCapital(str1,str2);
	cout<<str2<<"\n";
	
	return 0;
}