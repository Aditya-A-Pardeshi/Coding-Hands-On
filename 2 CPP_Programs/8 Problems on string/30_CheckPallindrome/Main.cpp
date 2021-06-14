/*
Accept string from user and check whether the string is palindrome
or not without considering its case.
Input : “1abccBA1”
Output : TRUE
*/

#include<iostream>
#include<stdio.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckPallindrome(char src[])
{
	int i = 0;
	int j = 0;
	int iCnt = 0;
	BOOL bAns = TRUE;
	//find size of string
	while(src[i] != '\0')
	{
		iCnt++;
		i++;
	}
	
	//Reverse string
	for(i=0,j=iCnt-1;i<=j;i++,j--)
	{
		if(src[i] != src[j])
		{
			bAns = FALSE;
			break;			
		}
	}
	return bAns;
}

int main()
{
	char str[30] = {'\0'};
	BOOL bResult = FALSE;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	bResult = CheckPallindrome(str);
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