/*
Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void ReverseString(char arr[])
{
	int i = 0;
	int j = 0;
	char temp = '\0';
	int iCnt = 0;
	
	while(arr[i] != '\0')
	{
		iCnt++;
		i++;
	}
	
	for(i=0,j=iCnt-1;i<=j;i++,j--)
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
	
	//Call to function
	ReverseString(str);
	cout<<str<<"\n";
	
	return 0;
}