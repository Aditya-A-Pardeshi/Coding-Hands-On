/*
Selection sort application
Accept an array from user and sort it using selection sort algorithm
*/

#include<iostream>
using namespace std;

void SelectionSort(int arr[],int iSize)
{
	int min_index = 0;
	int temp = 0;
	for(int i=0;i<iSize;i++)
	{
		min_index = i;
		for(int j=i+1;j<iSize;j++)
		{
			if(arr[min_index] < arr[j])
			{
				min_index = j;
			}
		}
		//swap elements
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
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
	SelectionSort(arr,iSize);
	
	//Display sorted array
	cout<<"Sorted array:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}