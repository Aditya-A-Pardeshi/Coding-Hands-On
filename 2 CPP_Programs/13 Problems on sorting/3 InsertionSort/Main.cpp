/*
Insertion sort application
Accept an array from user and sort it using insertion sort algorithm
12 34 11 45 67 4 90
*/

#include<iostream>
using namespace std;

void InsertionSort(int arr[],int iSize)
{
	int iNum = 0;
	int j = 0;
	for(int i=0;i<iSize;i++)
	{
		iNum = arr[i];
		j = i-1;
		while((j>=0) && (arr[j] > iNum))
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = iNum;
	}
}

int main()
{
	int iSize = 0;
	//Accept array size
	cout<<"Enter number of elements:\n";
	cin>>iSize;
	
	//Allocate memory
	int *arr = NULL;
	arr = new int[iSize];
	
	//Accept array elements
	cout<<"Enter elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}
	
	//Display accepted elements
	cout<<"Accepted array:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	//Call to sort function
	InsertionSort(arr,iSize);
	
	//Display sorted array
	cout<<"Sorted array:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}