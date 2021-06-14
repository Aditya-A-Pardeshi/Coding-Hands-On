/*
"Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int main()
{
	char ch = '\0';
	for(int i=0;i<256;i++)
	{
		
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
	
	return 0;
}