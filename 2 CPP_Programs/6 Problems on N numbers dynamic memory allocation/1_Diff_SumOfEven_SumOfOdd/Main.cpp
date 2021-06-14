/*
Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 
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

int AddEvenElements(int arr[],int iSize)
{
	int iSum = 0;
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]%2==0)
		{
			iSum = iSum+arr[i];
		}
	}
	return iSum;
}

int AddOddElements(int arr[],int iSize)
{
	int iSum = 0;
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]%2 != 0)
		{
			iSum = iSum + arr[i];
		}
	}
	return iSum;
}

int main()
{
	int iSize = 0;
	int iOddSum = 0;
	int iEvenSum = 0;
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
	
	//Find even sum
	iEvenSum = AddEvenElements(arr,iSize);
	
	//Find odd sum
	iOddSum = AddOddElements(arr,iSize);
	
	//Display the difference
	cout<<"Answer: "<<(iEvenSum - iOddSum)<<"\n";
	
	return 0;
}