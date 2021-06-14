/*
Problem Statement: Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
Input : 5
Output : 5000 
*/

#include<stdio.h>

float ConvertDistance(float fDistanceKm)
{
	return (fDistanceKm * 1000.0f);
}

int main()
{
	float fDistanceKm = 0.0f;
	float fDistanceM = 0.0f;
	
	printf("Enter distance in km:\n");
	scanf("%f",&fDistanceKm);
	
	fDistanceM = ConvertDistance(fDistanceKm);
	printf("Distance in meter: %f",fDistanceM);
	
	return 0;
}