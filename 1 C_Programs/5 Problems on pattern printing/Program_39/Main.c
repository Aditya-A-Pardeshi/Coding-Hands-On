/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M a r v e l l o u s
 M a r v e l l o u
 M a r v e l l o
 M a r v e l l
 M a r v e l
 M a r v e
 M a r v
 M a r
 M a
 M
 */
 
#include<stdio.h>

void DisplayPattern(char arr[])
{
	int iCnt = 0, i = 0, j = 0;
	while(arr[iCnt] != '\0')
	{
		iCnt++;
	}
	for(i=iCnt;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%c ",arr[j]);
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