/*
Problem Statement: Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9) 
*/

#include<stdio.h>

float ConvertTemperature(float fTempF)
{
	float fTempC = 0.0f;
	fTempC = ((fTempF-(float)32) * ((float)5/(float)9));
	return fTempC;
}

int main()
{
	float fTempF = 0.0f;
	float fTempC = 0.0f;
	
	printf("Enter temperature in Fahrenheit:\n");
	scanf("%f",&fTempF);
	
	fTempC = ConvertTemperature(fTempF);
	printf("Temperature in Celcius: %f\n",fTempC);
	
	return 0;
}