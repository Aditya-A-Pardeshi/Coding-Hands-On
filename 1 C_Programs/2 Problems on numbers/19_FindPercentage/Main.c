/*
Problem Statement: Write a program which accept total marks & obtained marks from user and calculate percentage
Input : 1000 745
Output : 74.5% 
*/

#include<stdio.h>

float FindPercentage(float tmarks,float omarks)
{
	return (omarks/tmarks)*100;
}

int main()
{
	float TotalMarks = 0.0f;
	float ObtainedMarks = 0.0f;
	float Percentage = 0.0f;
	char ch = '%';
	
	printf("Enter total marks:\n");
	scanf("%f",&TotalMarks);
	
	printf("Enter obtained marks:\n");
	scanf("%f",&ObtainedMarks);
	
	Percentage = FindPercentage(TotalMarks,ObtainedMarks);
	printf("Percentage: %f%c",Percentage,ch);

	return 0;
}