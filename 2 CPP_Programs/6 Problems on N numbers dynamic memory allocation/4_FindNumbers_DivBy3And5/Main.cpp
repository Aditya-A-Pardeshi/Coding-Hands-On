/*
Accept N numbers from user and display all such elements which are divisible by 3 and 5.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 15 
*/

using namespace std;
#include<iostream>

void AcceptArrayElements(int arr[],int iSize)
{
	cout<<"Enter array elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}
}

void DisplayArrayElements(int arr[],int iSize)
{
	cout<<"Entered array is:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void DivisibleBy5And3(int arr[],int iSize)
{
	cout<<"Elements divisible by 5 and 3:\n";
	for(int i=0;i<iSize;i++)
	{
		if((arr[i]%5 == 0) && (arr[i]%3 == 0))
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	int iSize = 0;
	
	//Accept size from user
	cout<<"Enter number of elements:\n";
	cin>>iSize;
	
	//Allocate memory for these many elements
	int *arr = NULL;
	arr = new int[iSize];
	
	//Accept array elements
	AcceptArrayElements(arr,iSize);
	
	//Display array elements
	DisplayArrayElements(arr,iSize);
	
	//Display elements divisible by 5 and 3
	DivisibleBy5And3(arr,iSize);
	
	return 0;
}