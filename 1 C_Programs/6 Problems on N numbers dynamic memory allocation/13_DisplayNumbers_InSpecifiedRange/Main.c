/*
Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayElements(int *ptr,int iSize,int iStart, int iEnd)
{
	int i = 0;
	
	for(i=0;i<iSize;i++)
	{
		if((ptr[i]>iStart) && (ptr[i]<iEnd))
		{
			printf("%d ",ptr[i]);
		}
	}
}

int main()
{
	//variable to hold number of elements in array
	int iSize = 0;
	//variable to hold base address of array
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	//variable to hold start range
	int iStart = 0;
	//Variable to hold end range
	int iEnd = 0;
	
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
	
	//Accept start range
	printf("Enter start range:\n");
	scanf("%d",&iStart);
	
	//Accept end range
	printf("Enter end range:\n");
	scanf("%d",&iEnd);
	
	//Call to function
	DisplayElements(arr,iSize,iStart,iEnd);
	
	//Deallocate memory
	free(arr);
	
	return 0;
}