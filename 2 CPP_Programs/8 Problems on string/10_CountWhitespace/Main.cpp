/*
Write a program which accept string from user and count number of white spaces
Input : "HemalatA"
Output : 0
Input : "Unix Operating System"
Output : 2
Input : "Ubuntu Linux Operating System Release Latest"
Output : 5 
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int CountWhitespace(char arr[])
{	
	int iCnt = 0;
	while(*arr != '\0')
	{
		if(*arr == ' ')
		{
			iCnt++;
		}
		arr++;
	}	
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCnt = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	iCnt = CountWhitespace(str);
	cout<<iCnt<<"\n";
	
	return 0;
}