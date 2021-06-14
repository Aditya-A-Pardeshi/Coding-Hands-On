/*
Write a program which accept string from user and copy that characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM” 
*/

#include<stdio.h>

void CopyString(char src[],char dest[])
{
	int iCnt = 0;
	//traverse till end of string
	while(*src != '\0')
	{
		iCnt++;
		src++;
	}
	src--;
	while(iCnt != '\0')
	{
		*dest = *src;
		src--;
		dest++;
		iCnt--;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	CopyString(str1,str2);
	
	//Display copied string
	printf("%s",str2);
	
	return 0;
}