/*
"Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE "
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL SearchElement(int brr[],int iSize, int iNum)
{
	BOOL bAns = FALSE;
	int iStart = 0;
	int iEnd = 0;
	for(iStart = 0,iEnd = iSize-1;iStart<=iEnd;iStart++,iEnd--)
	{
		if((brr[iStart] == iNum) || (brr[iEnd] == iNum))
		{
			bAns = TRUE;
			break;
		}
	}
	return bAns;
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iSearchElement = 0;
	BOOL bResult = FALSE;
	
	//Accept number of elements
	cout<<"Enter number of elements:\n";
	cin>>iSize;
	
	//Allocate memory
	arr = new int[iSize];
	
	//Check for failure in memory allocation
	if(arr == NULL)
	{
		cout<<"Memory allocation failed\n";
		return -1;
	}
		
	//Accept elements
	cout<<"Enter elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}
	
	//Display the accepted elements
	cout<<"Accepted elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	//Accept search elements
	cout<<"Enter element to search:\n";
	cin>>iSearchElement;
		
	bResult = SearchElement(arr,iSize,iSearchElement);	
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	delete arr;
	
	return 0;
}