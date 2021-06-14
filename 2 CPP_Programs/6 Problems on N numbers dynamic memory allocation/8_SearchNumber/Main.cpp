/*
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

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

BOOL CheckElement(int arr[],int iSize, int iNum)
{
	BOOL bRet = FALSE;
	for(int i=0,j=iSize-1;i<=j;i++,j--)
	{
		if((arr[i] == iNum) || (arr[j] == iNum))
		{
			bRet = TRUE;
			break;
		}
	}
	return bRet;
}

int main()
{
	int iSize = 0;
	int iNum = 11;
	BOOL bAns = FALSE;
	
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
	
	//Check element
	bAns = CheckElement(arr,iSize,iNum);
	if(bAns == TRUE)
	{
		cout<<"Element found\n";
	}
	else
	{
		cout<<"Element not found\n";
	}
	
	return 0;
}