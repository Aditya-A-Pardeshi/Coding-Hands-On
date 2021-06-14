/*
Write a program which accept string from user reverse that string in place.
Input : "abcd"
Output : "dcba"
*/

#include<stdio.h>

void ReverseString(char arr[])
{
	int i = 0,j = 0,iCnt = 0;
	char temp = '\0';
	//count the length of string
	while(arr[i] != '\0')
	{
		i++;
		iCnt++;
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
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	ReverseString(str);
	printf("%s\n",str);
	
	return 0;
}