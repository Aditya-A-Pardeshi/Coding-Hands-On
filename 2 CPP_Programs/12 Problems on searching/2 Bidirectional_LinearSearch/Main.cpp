/*
Write program to search an element using bi directional linear search
Accept an array from user and element to search. Return True if the element exists
*/

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

class Searching
{
	public:
	
	void AcceptElements(int arr[],int iSize)
	{
		cout<<"Enter elements:\n";
		for(int i=0;i<iSize;i++)
		{
			cin>>arr[i];
		}
	}
	
	void DisplayElements(int arr[],int iSize)
	{
		cout<<"Array elemnts are:\n";
		for(int i=0;i<iSize;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	
	BOOL SearchElement(int arr[],int iSize,int iNum)
	{
		BOOL bAns = FALSE;
		int i = 0;
		int j = 0;
		for(i=0,j=iSize-1;i<=j;i++,j--)
		{
			if((arr[i] == iNum) || (arr[j] == iNum))
			{
				bAns = TRUE;
				break;
			}
		}
		return bAns;
	}
};

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iNo = 0;
	BOOL bResult = FALSE;
	
	cout<<"Enter number of elements:\n";
	cin>>iSize;
	
	//Allocate memory
	arr = new int[iSize];
	
	Searching sobj;
	sobj.AcceptElements(arr,iSize);
	
	sobj.DisplayElements(arr,iSize);
	
	cout<<"Enter element to search:\n";
	cin>>iNo;
	
	bResult = sobj.SearchElement(arr,iSize,iNo);
	if(bResult == TRUE)
	{
		cout<<"Element found\n";
	}
	else
	{
		cout<<"Element not found\n";
	}
	
	return 0;
}