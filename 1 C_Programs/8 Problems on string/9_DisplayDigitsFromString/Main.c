/*
Write a program which accept string from user and display only digits from that string.
Input : "Hema656lata"
Output : 656
Input : "Demo"
Output : 
*/

#include<stdio.h>

void DisplayDigits(char arr[])
{
	while(*arr != '\0')
	{
		if((*arr>='0') && (*arr<='9'))
		{
			printf("%c",*arr);
		}
		arr++;
	}
}

int main()
{
	char str[30] = {'\0'};
	
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	DisplayDigits(str);

	return 0;
}