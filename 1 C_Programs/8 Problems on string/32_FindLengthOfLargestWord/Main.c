/*
Write a program which accept string from user and return length of largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11 
*/
#include<stdio.h>

int LargestWord(char str[])
{
	int iCnt = 1;
	int iMax = 0;
	if(str == NULL)
	{
		return -1;
	}
	
	while(*str != '\0') //traverse the string till end
	{
		if(*str == ' ')
		{
			if(iCnt>iMax)
			{
				iMax = iCnt;
			}
			iCnt = 1;
		}
		iCnt++;
		str++;
	}
	return iMax;
}

int main()
{
	char arr[40];
	int iMax = 0;
	
	printf("Enter a string: \n");
	scanf("%[^\n]s",arr);
	
	iMax = LargestWord(arr);
	printf("%d",iMax);
	
	return 0;
}