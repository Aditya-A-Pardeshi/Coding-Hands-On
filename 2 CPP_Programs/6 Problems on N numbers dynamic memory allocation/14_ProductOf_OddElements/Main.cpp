/*
"Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0 "
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int MultiplyOdd(int brr[],int iSize)
{
	int bAns = FALSE;
	int iAns = 1;
	for(int i = 0;i<iSize;i++)
	{
		if(brr[i]%2 != 0)
		{
			iAns = iAns * brr[i];
			bAns = TRUE;
		}
	}
	if(bAns == TRUE)
	{
		return iAns;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iResult = 0;
	
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
		
	iResult = MultiplyOdd(arr,iSize);
	cout<<iResult<<"\n";
	
	delete arr;
	
	return 0;
}