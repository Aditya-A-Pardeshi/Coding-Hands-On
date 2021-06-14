/*
Write a program which accept string from user and copy the contents into another string by removing extra white spaces.
Input : “Marvel lous multi OS”
Output : “Marvellous multi OS”
*/
#include<stdio.h>

void RemoveSpace(char src[], char dest[])
{
	int iCnt = 0;
	while(*src != '\0')		//travel the src string till you reach the end
	{
		if((*src == ' ') || (*src == '\t'))
		{
			iCnt++;
		}
		else
		{
			iCnt = 0;
		}
		if(iCnt<=1)
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
		{
			src++;
		}
	}
	*dest = '\0';
}

int main()
{
	char str1[30];
	char str2[30];
	
	printf("Enter the string: \n");
	scanf("%[^\n]s",str1);
	
	RemoveSpace(str1,str2);
	
	printf("%s",str2);
	
	return 0;
}