/*
Write a program which accept string from user and count number of
capital characters.
Input : "Ubuntu Linux Operating System"
Output : 4
*/

#include<stdio.h>

int CountCapital(char arr[])
{
	int Count = 0;
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			Count++;
		}
		arr++;
	}
	return Count;
}

int main()
{
	int iCnt = 0;
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCnt = CountCapital(str);
	//Display the return value
	printf("Number of capital characters: %d\n",iCnt);
	
	return 0;
}
