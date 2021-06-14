/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : "Ubuntu Operating System"
Output : 15 (18-3) 
*/

#include<stdio.h>

int FindDiff(char arr[])
{
	int iCntCapital = 0;
	int iCntSmall = 0;
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			iCntCapital++;
		}
		if((*arr>='a') && (*arr<='z'))
		{
			iCntSmall++;
		}
		arr++;
	}
	return (iCntSmall - iCntCapital);
}

int main()
{
	int iCnt = 0;
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCnt = FindDiff(str);
	//Display the return value
	printf("Answer: %d\n",iCnt);
	
	return 0;
}
