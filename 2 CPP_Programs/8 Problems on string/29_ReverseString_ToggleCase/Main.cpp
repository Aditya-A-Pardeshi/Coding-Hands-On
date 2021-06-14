/*
Accept sing from user and reverse the contents of that string by
toggling the case.
Input : “aBCdef”
Output : “FEDcbA”
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void ReverseStringToggleCase(char src[])
{
	int i = 0;
	int j = 0;
	int iCnt = 0;
	char temp = '\0';
	//find size of string and toggle case
	while(src[i] != '\0')
	{
		iCnt++;
		if((src[i] >= 'A') && (src[i] <= 'Z'))
		{
			src[i] = src[i] + 32;
		}
		else if((src[i] >= 'a') && (src[i] <= 'z'))
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	
	//Reverse string
	for(i=0,j=iCnt-1;i<=j;i++,j--)
	{
		temp = src[i];
		src[i] = src[j];
		src[j] = temp;
	}
}

int main()
{
	char str[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	fflush(stdin);
	
	ReverseStringToggleCase(str);
	
	cout<<str;
	
	return 0;
}