/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S 
 */
 
#include<stdio.h>

void DisplayPattern(char arr[])
{
	int iCnt = 0, i = 0, j = 0;
	while(arr[iCnt] != '\0')
	{
		iCnt++;
	}
	for(i=0;i<iCnt;i++)
	{
		for(j=0;j<iCnt;j++)
		{
			if((arr[j]>='a') && (arr[j]<='z'))
			{
				printf("%c ",arr[j]-32);
			}
			else
			{
				printf("%c ",arr[j]);
			}
		}
		printf("\n");
	}
}

int main()
{
 char str[20];
	 
	printf("Enter a string: \n");
	scanf("%[^\n]s",str);
	 
	DisplayPattern(str);
	return 0;
}