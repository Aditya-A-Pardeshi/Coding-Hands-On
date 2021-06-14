/*
Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int FindLen(char src[])
{
	static int iCnt = 0;
	if(*src != '\0')
	{
		iCnt++;
		src++;
		FindLen(src);
	}

	return iCnt;
}

int main()
{
	char str[] = {'\0'};
	int iCount = 0;
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCount = FindLen(str);
	cout<<iCount;
	
	return 0;
}