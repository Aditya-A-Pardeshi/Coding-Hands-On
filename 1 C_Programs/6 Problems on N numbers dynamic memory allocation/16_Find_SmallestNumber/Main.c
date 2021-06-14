/*
Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3 
*/

//header file inclusion
#include<stdio.h>
#include<stdlib.h>

//function definition
int FindSmallest(int *ptr,int iSize)
{
	int i = 0;
	int iMin = ptr[i];
	for(i=1;i<iSize;i++)
	{
		if(ptr[i]<iMin)
		{
			iMin = ptr[i];
		}
	}
	return iMin;
}

int main()
{
	//Variable to hold number of elements
	int iSize = 0;
	//variable to hold base address of first elements
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	//Variable to hold smallest elements
	int iMin = 0;
	
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
	iMin = FindSmallest(arr,iSize);
	//Display return value
	printf("Smallest element is %d\n",iMin);
	
	//Deallocate memory
	free(arr);
	
	//return from main
	return 0;
}