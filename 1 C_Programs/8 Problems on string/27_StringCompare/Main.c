/*
Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
 “Marvellous Infosystems”
Output : TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StringCompare(char str1[], char str2[])
{
	BOOL bRet = TRUE;
	while((*str1 != '\0') || (*str2 != '\0'))
	{
		if (*str1 != *str2)
		{
			bRet = FALSE;
			break;
		}
		else
		{
			str1++;
			str2++;
		}
	}
	return bRet;
}

int main()
{
	BOOL bRet = FALSE;
	char arr[30];
	char brr[30];
	
	printf("Enter first string: \n");
	scanf("%[^\n]s",arr);
	
	fflush(stdin);
	
	printf("Enter second string: \n");
	scanf("%[^\n]s",brr);
	
	bRet = StringCompare(arr,brr);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}
