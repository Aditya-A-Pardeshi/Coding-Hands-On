/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
 10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void StringCopy(char src[],char dest[], int iSize)
{
	int i = 0;
	int iCnt = 0;
	while(src[i] != '\0')
	{
		iCnt++;
		i++;
	}
	iCnt;
	if(iSize<=0)
	{
		cout<<"Invalid size\n";
		return;
	}
	else if(iSize<iCnt)
	{
		for(i = 0;i<iSize;i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	else
	{
		for(i = 0;i<iCnt;i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	int iSize = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	cout<<"Enter characters to copy:\n";
	cin>>iSize;
	
	//Call to function
	StringCopy(str1,str2,iSize);
	cout<<str2<<"\n";
	
	return 0;
}