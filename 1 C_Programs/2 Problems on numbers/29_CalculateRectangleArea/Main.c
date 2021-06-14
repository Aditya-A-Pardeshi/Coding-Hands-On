/*
 Problem Statement: Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834 
*/

#include<stdio.h>

float CalculateArea(float fHeight, float fWidth)
{
	float fArea = 0.0f;
	fArea = fHeight*fWidth;
	
	return fArea;
}

int main()
{
	float fHeight = 0.0f;
	float fWidth = 0.0f;
	float fArea = 0.0f;
	
	printf("Enter rectangle height:\n");
	scanf("%f",&fHeight);
	
	printf("Enter rectangle width:\n");
	scanf("%f",&fWidth);
	
	fArea = CalculateArea(fHeight,fWidth);
	printf("Area of rectangle: %f\n",fArea);
	
	return 0;
}