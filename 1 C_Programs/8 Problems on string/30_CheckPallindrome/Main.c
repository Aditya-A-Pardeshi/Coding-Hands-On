/*
Accept string from user and check whether the string is palindrome or not without considering its case.
Input : “1abccBA1”
Output : TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

CheckPallindrome(char str[])
{
	
	int i = 0;
	int first = 0, last = 0;
	BOOL bRet = TRUE;
	while(str[i] != '\0')	//traverse the string to fing length and toggle
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			str[i] = str[i]+32;
		}
		i++;
	}
	
	for(first=0,last=i-1;first<last;first++,last--)
	{
		if(str[first] != str[last])
		{
			bRet = FALSE;
			break;
		}
	}
	return bRet;
}

int main()
{
	char arr[30];
	BOOL bRet = FALSE;
	
	printf("Enter the string: ");
	scanf("%[^\n]s",arr);
	
	bRet = CheckPallindrome(arr);
	if(bRet == FALSE)
	{
		printf("FALSE");
	}
	else
	{
		printf("TRUE");
	}
	
	return 0;
}