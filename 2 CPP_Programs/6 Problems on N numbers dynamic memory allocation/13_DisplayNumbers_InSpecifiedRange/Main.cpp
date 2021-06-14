/*
"Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : "
*/

using namespace std;
#include<iostream>

void DisplayNumbers(int brr[],int iSize, int iStart, int iEnd)
{
	for(int i = 0;i<iSize;i++)
	{
		if((brr[i] > iStart) && (brr[i] < iEnd))
		{
			cout<<brr[i]<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iStart = 0;
	int iEnd = 0;
	
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
	
	//Accept range
	cout<<"Enter start range:\n";
	cin>>iStart;
	cout<<"Enter end range:\n";
	cin>>iEnd;
		
	DisplayNumbers(arr,iSize,iStart,iEnd);	
	
	delete arr;
	
	return 0;
}