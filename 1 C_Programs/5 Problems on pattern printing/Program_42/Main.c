/*
Write a program which accept string from user and print below pattern.
Input : “Marvellous”
Output :
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
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
			if((arr[j]>='A') && (arr[j]<='Z'))
			{
				printf("%c ",arr[j]+32);
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