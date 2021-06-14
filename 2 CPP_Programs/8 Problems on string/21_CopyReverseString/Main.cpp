/*
Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : "Hemalata Choudhary"
Output : "yrahduohC atalameH"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void StringReverseCopy(char src[],char dest[])
{
	int i = 0;
	int iCnt = 0;
	while(src[i] != '\0')
	{
		iCnt++;
		i++;
	}
	iCnt--;
	for(i=iCnt;i>=0;i--)
	{
		*dest = src[i];
		dest++;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	StringReverseCopy(str1,str2);
	
	cout<<"Reverse string:\n";
	cout<<str2;
	
	return 0;
}