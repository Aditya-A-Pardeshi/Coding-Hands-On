/*
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65 
Octal 0101
Hexadecimal 0X41 
*/

#include<stdio.h>

int main()
{
	char ch = '\0';
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("Character: %c\n",ch);
	printf("Decimal: %d\n",ch);
	printf("Octal: %o\n",ch);
	printf("Hexadecimal: %x\n",ch);
	return 0;
}