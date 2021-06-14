/*
Accept N numbers from user and return the difference between largest and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3) 
*/

//header file inclusion
#include<stdio.h>
#include<stdlib.h>

//function definition
int FindDiff(int *ptr,int iSize)
{
	int i = 0;
	int iMax = ptr[i];
	int iMin = ptr[i];
	for(i=1;i<iSize;i++)
	{
		if(ptr[i]<iMin)
		{
			iMin = ptr[i];
		}
		if(ptr[i]>iMax)
		{
			iMax = ptr[i];
		}
	}
	return (iMax-iMin);
}

int main()
{
	//Variable to hold number of elements
	int iSize = 0;
	//variable to hold base address of first elements
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	//Variable to hold largest elements
	int iDiff = 0;
	
	//Accept number of elements
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	//Allocate memory for these many elements
	arr = (int*) malloc(iSize*(sizeof(int)));
	
	//Check for failure of memory allocation
	if(arr == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return -1;
	}
	
	//Accept elements
	printf("Enter elements:\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Call to function
	iDiff = FindDiff(arr,iSize);
	//Display return value
	printf("Difference between largest and smallest element is %d\n",iDiff);
	
	//Deallocate memory
	free(arr);
	
	//return from main
	return 0;
}