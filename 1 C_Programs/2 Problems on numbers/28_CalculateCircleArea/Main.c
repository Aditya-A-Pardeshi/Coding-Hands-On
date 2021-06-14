/*
Problem Statement: Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
*/

#include<stdio.h>


float CalculateRadius(float fRadius)
{
	float fArea = 0.0f;
	fArea = 3.14*fRadius*fRadius;
	return fArea;
}

int main()
{
	float fRadius = 0.0f;
	float fArea = 0.0f;
	
	printf("Enter radius:\n");
	scanf("%f",&fRadius);
	
	fArea = CalculateRadius(fRadius);
	printf("Area: %f",fArea);
	
	return 0;
}