/*
4. Accept sing from user and reverse the contents of that string by
toggling the case.
Input : “aBCdef”
Output : “FEDcbA” 
*/
#include<stdio.h>

StringToggle(char str[])
{
	int i = 0;
	int first = 0, last = 0;
	char temp = '\0';
	while(str[i] != '\0')	//traverse the string to fing length and toggle
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			str[i] = str[i]+32;
		}
		else if((str[i]>='a') && (str[i]<='z'))
		{
			str[i] = str[i]-32;
		}
		else{}
		i++;
	}
	
	for(first=0,last=i-1;first<last;first++,last--)
	{
		
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
	}
	
}

int main()
{
	char arr[30];
	
	printf("Enter the string: ");
	scanf("%[^\n]s",arr);
	
	StringToggle(arr);
	printf("%s",arr);
	
	return 0;
}