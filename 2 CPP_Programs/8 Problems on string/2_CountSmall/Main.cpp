/*
Write a program which accept string from user and count number of
small characters.
Input : “Operating System”
Output : 13
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int CountSmall(char arr[])
{
	int iCnt = 0;
	
	while(*arr != '\0')
	{
		if((*arr >= 'a') && (*arr <= 'z'))
		{
			iCnt++;
		}
		arr++;
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCnt = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	iCnt = CountSmall(str);
	//Display return value
	cout<<iCnt<<"\n";
	
	return 0;
}