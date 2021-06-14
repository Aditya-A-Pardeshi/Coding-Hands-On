/*
Write a program which accept string from user and display it in reverse order.
Input : "Operating"
Output : "gnitarepO"
*/

#include<stdio.h>

void ReverseString(char arr[])
{
	int i = 0;
	int j = 0;
	int iCnt = 0;
	char temp = '\0';
	//iterate till last character to fing length of string
	while(arr[i] != '\0')
	{
		iCnt++;
		i++;
	}
	//reverse string
	for(i=0,j=iCnt-1;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main()
{
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	ReverseString(str);
	printf("%s\n",str);
	
	return 0;
}
