/*
Problem Statement: Program to print 5 times “Hello World” on screen. 
*/

#include<stdio.h>

void PrintString(char *str)
{
	//variable for loop counter
	int i = 0;
	for(i = 0;i<5;i++)
	{
		printf("%s\n",str);
	}
}

//entry point function
int main()
{
	char arr[] = "Hello World";
	
	PrintString(arr);
	
	return 0;
}