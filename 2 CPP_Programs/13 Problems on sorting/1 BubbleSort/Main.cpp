/*
Bubble sort application
Accept an array from user and sort it using bubble sort algorithm
*/

#include<iostream>
using namespace std;

void BubbleSort(int arr[],int iSize)
{
	int temp = 0;
	for(int i=0;i<iSize;i++)
	{
		for(int j=0;j<iSize-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
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
	BubbleSort(arr,iSize);
	
	//Display sorted array
	cout<<"Sorted array:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}