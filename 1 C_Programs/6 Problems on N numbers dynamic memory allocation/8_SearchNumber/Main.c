/*
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
 Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL SearchNumber(int *ptr,int iSize,int iNum)
{
	//variable for loop counter
	int iStart = 0,iEnd = 0;
	BOOL bRet = FALSE;
	
	//Iterate the array
	for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
	{
		if((ptr[iStart] == iNum) || (ptr[iEnd] == iNum))
		{
			bRet = TRUE;
		}
	}
	return bRet;
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
	BOOL bRet = FALSE;
	//Number to search
	int iNum = 11;
	
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
	bRet = SearchNumber(arr,iSize,iNum);
	
	//Display return value from the function
	if(bRet==TRUE)
	{
		printf("%d is present\n",iNum);
	}
	else
	{
		printf("%d is not present\n",iNum);
	}
	
	//Deallocate memory
	free(arr);
	
	return 0;
}