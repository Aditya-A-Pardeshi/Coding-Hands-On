/*
Problem Statement: Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700 
*/

#include<stdio.h>

float ConvertDollarToINR(float fAmountD)
{
	float fAmountR = 0.0f;
	fAmountR = fAmountD * 70;
	return fAmountR;	
}

int main()
{
	float fAmountD = 0.0f;
	float fAmountR = 0.0f;
	
	printf("Enter amount in Dollar:\n");
	scanf("%f",&fAmountD);
	
	fAmountR = ConvertDollarToINR(fAmountD);
	printf("Amount in rupees: %f",fAmountR);
	
	return 0;
}