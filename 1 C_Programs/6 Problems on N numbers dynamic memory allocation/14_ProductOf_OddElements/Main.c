/*
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0 
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL FindProduct(int *ptr,int iSize,int *iProduct)
{
	int i = 0;
	BOOL bRet = FALSE;
	
	for(i=0;i<iSize;i++)
	{
		if(ptr[i]%2 != 0)
		{
			*iProduct = (*iProduct)*(ptr[i]);
			bRet = TRUE;
		}
	}
	return bRet;
}

int main()
{
	//variable to hold number of elements in array
	int iSize = 0;
	//variable to hold base address of array
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	//Variable to hold return value
	BOOL bRet = FALSE;
	//Variable to hold product of odd elements
	int iProduct = 1;
	
	//Accept number of elements from user
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	//Allocate memory for these many elements
	arr = (int *) malloc(iSize*sizeof(int));
	
	//Check for failure of memory allocation
	if(arr == NULL)
	{
		printf("Error: Unable to allocate memory\n");
		return -1;
	}
	
	//Accept elements from user
	printf("Enter elements:\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Call to function
	bRet = FindProduct(arr,iSize,&iProduct);
	//Check return value
	if(bRet == FALSE)
	{
		printf("%d\n",0);
	}
	else
	{
		printf("%d\n",iProduct);
	}
	
	//Deallocate memory
	free(arr);
	
	return 0;
}