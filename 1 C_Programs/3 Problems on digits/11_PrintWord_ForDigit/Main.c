/*
Problem Statement: Accept single digit number from user and print it into word
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number
*/

#include<stdio.h>

DisplayWord(int ch)
{
	if(ch < 0)
	{
		ch = -ch;
	}
	
	switch(ch)
	{		
		case 1:
			printf("One\n");
			break;
			
		case 2:
			printf("Two\n");
			break;
			
		case 3:
			printf("Three\n");
			break;
			
		case 4:
			printf("Four\n");
			break;
			
		case 5:
			printf("Five\n");
			break;
			
		case 6:
			printf("Six\n");
			break;
			
		case 7:
			printf("Seven\n");
			break;
			
		case 8:
			printf("Eight\n");
			break;
			
		case 9:
			printf("Nine\n");
			break;
			
		default:
			printf("Invalid digit\n");
	}
}

int main()
{
	int digit = 0;
	
	printf("Enter digit:\n");
	scanf("%d",&digit);
	
	DisplayWord(digit);
	
	return 0;
}