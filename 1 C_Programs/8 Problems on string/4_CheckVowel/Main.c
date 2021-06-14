/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : "linux"
Output : TRUE
Input : "Demo"
Output : TRUE
Input : "xyz"
Output : FALSE 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char arr[])
{
	BOOL bAns = FALSE;
	while(*arr != '\0')
	{
		if((*arr=='a') || (*arr=='e') || (*arr=='i') || (*arr=='o') ||  (*arr=='u') || (*arr=='A') || (*arr=='E') || (*arr=='I') || (*arr=='O') || (*arr=='U'))
		{
			bAns = TRUE;
			break;
		}
		arr++;
	}
	return bAns;
}

int main()
{
	BOOL bRet = FALSE;
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	bRet = CheckVowel(str);
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	
	
	return 0;
}
