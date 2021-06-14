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
		for(int i=0;i<iSize;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	
	void SortArray(int arr[],int iSize)
	{
		int temp = 0;
		for(int i=0;i<iSize;i++)
		{
			for(int j=0;j<iSize-1-i;j++)
			{
				if(arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	
	//Binary search
	BOOL SearchElement(int arr[],int iSize,int iNum)
	{
		BOOL bAns = FALSE;
		int iStart = 0;
		int iEnd = iSize-1;
		int iMiddle = 0;
		
		while(iStart<=iEnd)
		{
			iMiddle = (iStart+iEnd)/2;
			if((arr[iStart] == iNum) || (arr[iEnd] == iNum) || (arr[iMiddle] == iNum))
			{
				bAns = TRUE;
				break;
			}
			if(iNum<iMiddle)
			{
				iEnd = iMiddle-1;
			}
			if(iNum>iMiddle)
			{
				iStart = iMiddle+1;
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
	//Accept array elements
	sobj.AcceptElements(arr,iSize);
	
	//Display array elements
	cout<<"Array elemnts are:\n";
	sobj.DisplayElements(arr,iSize);
	
	//Sort the array
	sobj.SortArray(arr,iSize);
	
	//Display sorted array
	cout<<"Sorted array:\n";
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