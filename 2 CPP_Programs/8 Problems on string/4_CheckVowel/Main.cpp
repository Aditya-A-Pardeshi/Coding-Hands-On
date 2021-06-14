/*
"Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE"
*/

using namespace std;
#include<iostream>
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Count(char arr[])
{
	BOOL bAns = FALSE;
	
	while(*arr != '\0')
	{
		if((*arr == 'A') || (*arr == 'a') || (*arr == 'e') || (*arr == 'E') || (*arr == 'i') || 
		(*arr == 'I') || (*arr == 'O') || (*arr == 'o') || (*arr == 'U') || (*arr == 'u'))
		{
			bAns = TRUE;
		}
		arr++;
	}
	return bAns;
}

int main()
{
	char str[30] = {'\0'};
	BOOL bResult = FALSE;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	bResult = Count(str);
	//Display return value
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}