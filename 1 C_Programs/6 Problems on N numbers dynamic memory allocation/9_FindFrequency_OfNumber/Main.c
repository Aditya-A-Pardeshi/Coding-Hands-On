/*
Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : 0 
*/

#include<stdio.h>
#include<stdlib.h>

int SearchNumber(int *ptr,int iSize,int iNum)
{
	//variable for loop counter
	int iStart = 0,iEnd = 0;
	int iCnt = 0;
	
	//Iterate the array
	for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
	{
		if(iStart == iEnd)
		{
			if((ptr[iStart] == iNum) || (ptr[iEnd] == iNum))
			{
				iCnt++;
				break;
			}
		}
		if(ptr[iStart] == iNum)
		{
			iCnt++;
		}
		if(ptr[iEnd] == iNum)
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
	//Number to search
	int iNum = 0;
	
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
	
	//Accept element to search
	printf("Enter element to search:\n");
	scanf("%d",&iNum);
	
	//Call function to find frequency of even elements
	iCnt = SearchNumber(arr,iSize,iNum);
	
	//Display return value from the function
	printf("Frequency of %d: %d",iNum,iCnt);
	
	//Deallocate memory
	free(arr);
	
	return 0;
}