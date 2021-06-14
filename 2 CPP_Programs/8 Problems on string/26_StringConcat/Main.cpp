/*
Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : "Hemalata"
 "Choudhary"
 3
Output : "Hemalata Cho"
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void StringConcat(char src[],char dest[], int iNum)
{
	int i = 0;
	int iCnt = 0;
	
	//navigate to end of source string
	while(*src != '\0')
	{
		src++;
	}
	//Add space at the end of source string
	*src = ' ';
	src++;
	//find length of destination string
	while(dest[i] != 0)
	{
		iCnt++;
		i++;
	}
	//if characters to copy is less than size of destination string
	if(iNum < iCnt)
	{
		for(i=0;i<iNum;i++)
		{
			*src = *dest;
			src++;
			dest++;
		}
	}
	//if characters to copy is more than size of destination string
	else
	{
		while(*dest != '\0')
		{
			*src = *dest;
			src++;
			dest++;
		}
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	int iSize = 0;
	
	printf("Enter string1:\n");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	printf("Enter string2:\n");
	scanf("%[^\n]s",str2);
	
	fflush(stdin);
	
	cout<<"Enter number of characters to copy:\n";
	cin>>iSize;
	
	StringConcat(str1,str2,iSize);
	
	cout<<str1;
	
	return 0;
}