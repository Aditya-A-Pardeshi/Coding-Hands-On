/*
Write a program which 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).
Input : "Hemalata"
"Hemalata Choudhary"
8
Output : TRUE
*/

#include<iostream>
#include<stdio.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StringCompareX(char src[],char dest[],int iNum)
{
	BOOL bAns = TRUE;
	for(int i=0;i<iNum;i++)
	{
		if(*src != *dest)
		{
			bAns = FALSE;
			break;
		}
		src++;
		dest++;
	}
	return bAns;
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	int iNum = 0;
	BOOL bResult = FALSE;
	
	printf("Enter string1:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	printf("Enter string2:\n");
	scanf("%[^\n]s",str2);
	
	fflush(stdin);
	
	cout<<"Enter number of characters to compare:\n";
	cin>>iNum;
	
	bResult = StringCompareX(str1,str2,iNum);
	if(bResult == TRUE)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
	
	return 0;
}