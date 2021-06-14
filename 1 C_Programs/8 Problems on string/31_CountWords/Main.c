/*
Write a program which accept string from user count number of words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “ Marvellous Multi OS Pune”
Output : 4 
*/
#include<stdio.h>

int CountWords(char str[])
{
	int iCnt = 1;
	if(str == NULL)
	{
		return -1;
	}
	
	while(*str != '\0') //traverse the string till end
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[40];
	int iWords = 0;
	
	printf("Enter a string: \n");
	scanf("%[^\n]s",arr);
	
	iWords = CountWords(arr);
	printf("%d",iWords);
	
	return 0;
}