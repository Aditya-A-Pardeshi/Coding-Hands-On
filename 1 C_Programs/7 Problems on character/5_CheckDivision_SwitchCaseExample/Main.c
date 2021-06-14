/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

void CheckDivision(char cDiv)
{
	switch(cDiv)
	{
		case 'A':
		case 'a':
			printf("7 AM\n");
			break;
			
		case 'B':
		case 'b':
			printf("8.30 AM\n");
			break;
			
		case 'C':
		case 'c':
			printf("9.20 AM\n");
			break;
			
		case 'D':
		case 'd':
			printf("10.30 AM\n");
			break;
			
		default:
			printf("Invalid division\n");
	}
}

int main()
{
	char cDiv = '\0';
	
	printf("Enter division:\n");
	scanf("%c",&cDiv);
	
	CheckDivision(cDiv);
}