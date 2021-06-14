/*
Write a recursive program which accept string from user and count white spaces.
Input : HE llo WOr lD
Output : 3"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int CountWhitespace(char src[])
{
	static int iCnt = 0;
	if(*src != '\0')
	{
		if(*src == ' ')
		{
			iCnt++;
		}
		src++;
		CountWhitespace(src);
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCount = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCount = CountWhitespace(str);
	cout<<iCount;
	
	return 0;
}