/*
Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 85 80 
*/

#include<stdio.h>
#include<stdlib.h>

void FindDiff(int *ptr,int iSize)
{
	int i = 0;
	int iSumEven = 0;
	int iSumOdd = 0;
	
	for(i=0;i<iSize;i++)
	{
		if(ptr[i]%5 == 0)
		{
			printf("%d ",ptr[i]);
		}
	}
}

int main()
{
	int iSize = 0;
	int i = 0;
	int *arr = NULL;
	
	//Accept number of elements
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	//Allocate memory for accepted number of elements
	arr = (int*) malloc(iSize * sizeof(int));
	
	//Check for failure in memory allocation
	if(arr == NULL)
	{
		printf("Memory allocation failed\n");
		return -1;
	}
	
	//Accept elements
	printf("Enter elements:\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//call to function
	FindDiff(arr,iSize);
	
	//deallocate the memory
	free(arr);
	
	return 0;
}