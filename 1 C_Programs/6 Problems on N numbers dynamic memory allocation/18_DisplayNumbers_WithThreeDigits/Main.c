/*
Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input : N : 6 
Elements : 8225 665 3 76 953 858
Output : 665 953 858 
*/

//header file inclusion
#include<stdio.h>
#include<stdlib.h>

//function definition
void CountDigits(int *ptr,int iSize)
{
	int i = 0;
	int iCnt = 0;
	int temp = 0;
	printf("Elements with 3 digits:\n");
	for(i=1;i<iSize;i++)
	{
		temp = ptr[i];
		iCnt = 0;
		while(temp != 0)
		{
			iCnt++;
			temp = temp/10;
		}
		
		if(iCnt == 3)
		{
			printf("%d ",ptr[i]);
		}
	}
}

int main()
{
	//Variable to hold number of elements
	int iSize = 0;
	//variable to hold base address of first elements
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	
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
	CountDigits(arr,iSize);
	
	//Deallocate memory
	free(arr);
	
	//return from main
	return 0;
}