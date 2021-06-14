/*
Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp()
function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : “Marvellous Infosystems”
 “Marvellous Logic Building”
 10
Output : TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StringCompare(char arr[], char brr[], int iNo)
{
	int i = 0;
	BOOL bRet = TRUE;
	for(i=0;i<iNo;i++)
	{
		if(*arr != *brr)
		{
			bRet = FALSE;
			break;
		}
		else
		{
			arr++;
			brr++;
		}
	}
	return bRet;
}

int main()
{
	char str1[30];
	char str2[30];
	int iNo = 0;
	BOOL bRet = FALSE;
	
	printf("Enter first string: ");
	scanf("%[^\n]s",str1);
	
	fflush(stdin);
	
	printf("Enter second string: ");
	scanf("%[^\n]s",str2);
	
	printf("Enter number of characters to compare: \n");
	scanf("%d",&iNo);
	
	bRet = StringCompare(str1,str2,iNo);
	
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