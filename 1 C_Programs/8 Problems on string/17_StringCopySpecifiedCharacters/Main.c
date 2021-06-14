/*
Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function) 
Input : “Marvellous Multi OS”
 10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then copy whole string into destination. 
*/

#include<stdio.h>

void StringCopyX(char src[],char dest[],int iNum)
{
	//count length of source string
	int i = 0;
	int iCnt = 0;
	while(src[i] != '\0')
	{
		iCnt++;
		i++;
	}
	
	if(iNum <= iCnt)
	{
		for(i=0;i<iNum;i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	else
	{
		while(*src != '\0')
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
	int iNo = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	//Accept number of characters to copy
	printf("Enter number of characters to copy:\n");
	scanf("%d",&iNo);
	
	//Call function that copies specified characters into another string
	StringCopyX(str1,str2,iNo);
	
	//Display copied string
	printf("%s\n",str2);
	
	return 0;
}