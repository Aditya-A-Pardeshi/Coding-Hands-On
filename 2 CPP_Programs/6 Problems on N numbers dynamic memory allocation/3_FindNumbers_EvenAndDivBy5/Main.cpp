/*
Accept N numbers from user and display all such elements which are even and divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80 
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

void EvenElementsDivisibleBy5(int arr[],int iSize)
{
	cout<<"Elements which are even and divisible by 5:\n";
	for(int i=0;i<iSize;i++)
	{
		if((arr[i]%5 == 0) && (arr[i]%2 == 0))
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
	
	//Display even elements divisible by 5
	EvenElementsDivisibleBy5(arr,iSize);
	
	return 0;
}