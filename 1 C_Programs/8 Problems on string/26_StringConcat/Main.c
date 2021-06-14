/*
Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : “Marvellous Infosystems”
 “Logic Building”
 5
Output : “Marvellous Infosystems Logic” 
*/
#include<stdio.h>

void StringConcat(char src[], char dest[], int iNo)
{
	int iCnt = 0;
	int i = 0;
	int DestCount = 0;
	
	while(dest[i]!='\0')
	{
		i++;
	}
	DestCount = i;
	
	while(*src != '\0')
	{
		src++;
	}
	
	if(iNo<DestCount)
	{
		for(iCnt=0;iCnt<iNo;iCnt++)
		{
			*src = *dest;
			src++;
			dest++;
		}
	}
	else
	{
		while(*dest != '\0')
		{
			*src = *dest;
			src++;
			dest++;
		}
	}
	*src = '\0';
}


int main()
{
	char arr[30];		//character array for source string
	char brr[30];		//character array for destination string
	int iNo = 0;		//number of characters to concat
	
	printf("Enter string1: \n");		//Accept first string
	scanf("%[^\n]s",arr);
	
	fflush(stdin);
	
	printf("Enter string2: \n");
	scanf("%[^\n]s",brr);
	
	fflush(stdin);
	
	printf("Enter number of characters to concat: ");
	scanf("%d",&iNo);
	
	StringConcat(arr,brr,iNo);
	
	printf("%s",arr);
	
	return 0;
}