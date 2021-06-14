/*
Program to print 5 to 1 numbers on screen
*/
//header file for input output
#include<stdio.h>

//function definition
void PrintNumbers(int iNo)
{
	int i = 0;
	for(i = 0;i<5;i++)
	{
		printf("%d\n",iNo);
		iNo--;
	}
}

int main()
{
	int iNum = 5;
	//call to the function
	PrintNumbers(iNum);
	
	//return from main
	return 0;
}