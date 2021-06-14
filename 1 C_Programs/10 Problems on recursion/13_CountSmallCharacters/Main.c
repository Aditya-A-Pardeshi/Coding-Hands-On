/*
3. Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
*/
#include<stdio.h>

int CountSmall(char arr[])
{
	static int iCnt = 0;
	if(*arr != '\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			iCnt++;
		}
		arr++;
		CountSmall(arr);
	}
	return iCnt;
}

int main()
{
	char str[30];
	int iRet = 0;
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iRet = CountSmall(str);
	printf("%d",iRet);
	
	return 0;
}