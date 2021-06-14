/*
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3) 
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

int CountOdd(int arr[],int iSize)
{
	int iCnt = 0;
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]%2 != 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iSize = 0;
	int iEvenCount = 0;
	int iOddCount = 0;
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
	iEvenCount = CountEven(arr,iSize);
	
	//Count odd elements
	iOddCount = CountOdd(arr,iSize);
	
	cout<<"Difference of even and odd count: "<<(iEvenCount - iOddCount)<<"\n";
	
	return 0;
}