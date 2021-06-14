/*
Problem Statement: Write a program that divides two numbers
*/
//header file for input output
#include<stdio.h>
//function prototype
float Divide(int,int);
//function definition
float Divide(int iNum1,int iNum2)
{
	float fResult = 0.0f;
	if(iNum2==0)
	{
		return 0.0;
	}
	fResult = (float)iNum1/(float)iNum2;
	return fResult;
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	float fAns = 0.0f;
	
	printf("Enter first number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter second number: \n");
	scanf("%d",&iNo2);
	
	fAns = Divide(iNo1,iNo2);
	printf("Answer of division is %f",fAns);
	
	return 0;
}