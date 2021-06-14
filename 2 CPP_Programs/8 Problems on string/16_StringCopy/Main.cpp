/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/

using namespace std;
#include<iostream>
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
	
	//Call to function
	StringCopy(str1,str2);
	cout<<str2<<"\n";
	
	return 0;
}