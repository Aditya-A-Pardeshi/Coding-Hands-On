/*
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int *ptr,int iSize)
{
	//variable for loop counter
	int i = 0;
	//variable to hold even counter
	int iCnt = 0;
	
	//Iterate the array
	for(i=0;i<iSize;i++)
	{
		if(ptr[i]%2 == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	//variable to hold number of elements - size of array
	int iSize = 0;
	//variable for loop counter
	int i = 0;
	//pointer to hold base address of array
	int *arr = NULL;
	//variable to hold return value of function
	int iCnt = 0;
	
	//Accept size of array
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	//Allocate memory for these many elements
	arr = (int*) malloc(iSize*sizeof(int));
	
	//Check for failure of memory allocation
	if(arr == NULL)
	{
		printf("Error: Unable to allocate memory");
		return -1;
	}
	
	//Accept elements
	printf("Enter elements:\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Call function to find frequency of even elements
	iCnt = CountEven(arr,iSize);
	
	//Display return value from the function
	printf("Answer: %d\n",iCnt);
	
	//Deallocate memory
	free(arr);
	
	return 0;
}