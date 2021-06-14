/*
1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3 
*/
#include<stdio.h>

int CountWhitespace(char arr[])
{
	static int iCnt = 0;
	{
		if(*arr != '\0')
		{
			if(*arr == ' ')
			{
				iCnt++;
			}
			arr++;
			CountWhitespace(arr);
		}
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iRet = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iRet = CountWhitespace(str);
	printf("%d\n",iRet);
	
	return 0;
}
