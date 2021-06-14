/*
"Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “Unix Operating System”
Output : (16-3)13"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int Count(char arr[])
{
	int iCntCapital = 0;
	int iCntSmall = 0;
	
	while(*arr != '\0')
	{
		if((*arr >= 'A') && (*arr <= 'Z'))
		{
			iCntCapital++;
		}
		else if((*arr >= 'a') && (*arr <= 'z'))
		{
			iCntSmall++;
		}
		arr++;
	}
	return (iCntSmall - iCntCapital);
}

int main()
{
	char str[30] = {'\0'};
	int iCnt = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	iCnt = Count(str);
	//Display return value
	cout<<iCnt<<"\n";
	
	return 0;
}