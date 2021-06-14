/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE 
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckElement(int *ptr,int iSize,int iNum)
{
	int iStart = 0;
	int iEnd = 0;
	BOOL bRet = FALSE;
	
	for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
	{
		if((ptr[iStart] == iNum) || (ptr[iEnd] == iNum))
		{
			bRet = TRUE;
			break;
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
	//variable to hold element to search
	int iNum = 0;
	//Variable to hold return value
	BOOL bRet = FALSE;
	
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
	bRet = CheckElement(arr,iSize,iNum);
	//Check return value
	if(bRet == FALSE)
	{
		printf("%d is not present\n",iNum);
	}
	else
	{
		printf("%d is present\n",iNum);
	}
	
	//Deallocate memory
	free(arr);
	
	return 0;
}