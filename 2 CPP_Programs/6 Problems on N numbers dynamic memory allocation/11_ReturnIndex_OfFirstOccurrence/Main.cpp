/*
"Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
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
Output : -1 "
*/

using namespace std;
#include<iostream>

int SearchElement(int brr[],int iSize, int iNum)
{
	int iIndex = -1;
	
	for(int i=0;i<iSize;i++)
	{
		if(brr[i] == iNum)
		{
			iIndex = i;
			break;
		}
	}
	return iIndex;
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iSearchElement = 0;
	int index = 0;
	
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
		
	index = SearchElement(arr,iSize,iSearchElement);	
	cout<<index<<"\n";
	
	delete arr;
	
	return 0;
}