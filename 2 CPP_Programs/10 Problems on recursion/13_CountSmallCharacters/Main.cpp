/*
Write a recursive program which accept string from user and count number of small characters.
Input : HElloWOrlD
Output : 5 
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int CountSmall(char src[])
{
	static int iCnt = 0;
	if(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			iCnt++;
		}
		src++;
		CountSmall(src);
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCount = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCount = CountSmall(str);
	cout<<iCount;
	
	return 0;
}