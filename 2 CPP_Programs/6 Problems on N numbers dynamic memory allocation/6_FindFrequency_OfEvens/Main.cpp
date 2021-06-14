/*
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3 
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

int CountEven(int arr[],int iSize)
{
	int iCnt = 0;
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]%2 == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iSize = 0;
	int iCnt = 0;
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
	
	//Count even elements
	iCnt = CountEven(arr,iSize);
	cout<<"Count of even elements: "<<iCnt<<"\n";
	
	return 0;
}