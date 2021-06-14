/*
Write a program which accept string from user and reverse each word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO” 
*/
#include<stdio.h>

void ReverseWordX(char str[])
{
	int iCnt = 0, iStart = 0, iEnd = 0, i = 0;
	char temp = '\0';
	while(str[iCnt] != '\0')		//travel the string till \0
	{
		i = iCnt;
		
		while((str[iCnt] != ' ') || (str[iCnt] != '\0'))		//travel till space
		{
			iCnt++;
		}
		
		for(iStart=i,iEnd=iCnt-1;iStart<iEnd;iStart++,iEnd--)
		{
			temp = str[iStart];
			str[iStart] = str[iEnd];
			str[iEnd] = temp;
		}
		iCnt++;
	}
}

int main()
{
	char arr[40];
		
	printf("Enter a string: \n");
	scanf("%[^\n]s",arr);
	
	ReverseWordX(arr);
	printf("%s",arr);
	
	return 0;
}