/*
"Accept N numbers from user and display summation of digits of each number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21 "
*/

using namespace std;
#include<iostream>

void AddDigits(int brr[],int iSize)
{
	int iSum = 0;
	int temp = 0;
	for(int i = 0;i<iSize;i++)
	{
		iSum = 0;
		temp = brr[i];
		while(temp != 0)
		{
			iSum = iSum + (temp%10);
			temp = temp/10;
		}
		cout<<iSum<<" ";
	}
	cout<<"\n";
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	
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
		
	AddDigits(arr,iSize);
	
	delete arr;
	
	return 0;
}