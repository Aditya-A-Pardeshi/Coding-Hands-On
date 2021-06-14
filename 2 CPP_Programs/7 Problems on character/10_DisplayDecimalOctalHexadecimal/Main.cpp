/*
"Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65 
Octal 0101
 Hexadecimal 0X41"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

void DisplayASCII(char ch)
{
	printf("ASCII in decimal: %d\n",(int)ch);
	printf("ASCII in hexadecimal: 0x%x\n",(int)ch);
	printf("ASCII in octal: 0o%o\n",(int)ch);
}


int main()
{
	char ch = '\0';
	
	cout<<"Enter character:\n";
	cin>>ch;
	
	DisplayASCII(ch);
	
	return 0;
}