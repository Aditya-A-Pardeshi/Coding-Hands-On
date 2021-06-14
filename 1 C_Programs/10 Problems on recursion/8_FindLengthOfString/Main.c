/*
3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5 
*/
#include<stdio.h>
int FindLen(char arr[])
{
	static int iCnt = 0;
	if(*arr != '\0')
	{
		iCnt++;
		arr++;
		FindLen(arr);
	}
	return iCnt;
}

int main()
{
	char str[10];
	int iLen = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iLen = FindLen(str);
	printf("%d\n",iLen);
	
	return 0;
}