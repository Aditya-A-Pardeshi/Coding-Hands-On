/*
Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 
*/

#include<stdio.h>
#include<stdlib.h>

int FindDiff(int *ptr,int iSize)
{
	int i = 0;
	int iSumEven = 0;
	int iSumOdd = 0;
	
	for(i=0;i<iSize;i++)
	{
		if(ptr[i]%2 == 0)
		{
			iSumEven = iSumEven + ptr[i];
		}
		else
		{
			iSumOdd = iSumOdd + ptr[i];
		}
	}
	return (iSumEven-iSumOdd);
}

int main()
{
	int iSize = 0;
	int i = 0;
	int *arr = NULL;
	int iDiff = 0;
	
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
	
	//call the function to find difference between sum of even and odd elements
	iDiff = FindDiff(arr,iSize);
	//Display returned value
	printf("Answer: %d\n",iDiff);
	
	//deallocate the memory
	free(arr);
	
	return 0;
}