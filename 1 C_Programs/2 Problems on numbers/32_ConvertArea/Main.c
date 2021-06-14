/*
Problem Statement: Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321 
*/

#include<stdio.h>

float ConvertArea(float fAreaSqft)
{
	float fAreaSqm = 0.0f;
	fAreaSqm = (fAreaSqft * 0.0929f);
	return fAreaSqm;
}

int main()
{
	float fAreaSqft = 0.0f;
	float fAreaSqm = 0.0f;
	
	printf("Enter area in square feet:\n");
	scanf("%f",&fAreaSqft);
	
	fAreaSqm = ConvertArea(fAreaSqft);
	printf("Area in square meter: %f",fAreaSqm);
	
	return 0;
}