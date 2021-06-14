/*
Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1 
*/

#include<stdio.h>
#include<stdlib.h>

int CheckElement(int *ptr,int iSize,int iNum)
{
	int i = 0;
	int iIndex = -1;
	
	for(i=iSize-1;i>=0;i--)
	{
		if(ptr[i] == iNum)
		{
			iIndex = i;
			break;
		}
	}
	return iIndex;
}

int main()
{
	//variable to hold number of elements in array
	int iSize = 0;
	//variable to hold base address of array
	int *arr = NULL;
	//variable for loop counter
	int i = 0;
	//variable to hold element to search
	int iNum = 0;
	//Variable to hold return value
	int iIndex = 0;
	
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
	
	//Accept element to search
	printf("Enter element to search:\n");
	scanf("%d",&iNum);
	
	//Call to function
	iIndex = CheckElement(arr,iSize,iNum);
	//Check return value
	if(iIndex == -1)
	{
		printf("%d is not found\n",iNum);
	}
	else
	{
		printf("Index of last occurance of %d: %d\n",iNum,iIndex);
	}
	
	//Deallocate memory
	free(arr);
	
	return 0;
}