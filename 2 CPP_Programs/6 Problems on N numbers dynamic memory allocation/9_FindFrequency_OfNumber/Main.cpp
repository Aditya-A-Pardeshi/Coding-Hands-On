/*
Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0 
*/

using namespace std;
#include<iostream>

int CountElement(int brr[],int iSize,int iNum)
{
	int iCount = 0;
	for(int i=0;i<iSize;i++)
	{
		if(brr[i] == iNum)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize = 0;
	int iSearchElement = 0;
	int iCnt = 0;
	//Accept size from user
	cout<<"Enter number of elements: \n";
	cin>>iSize;
	
	//Allocate dynamic memory for these many elements
	int *arr = NULL;
	arr = new int[iSize];

	//Accept the elements
	cout<<"Enter elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}
	
	//Display accepted elements
	cout<<"Entered array is:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	//Accept search element from user
	cout<<"Enter element to count:\n";
	cin>>iSearchElement;
	
	//Call to function
	iCnt = CountElement(arr,iSize,iSearchElement);
	
	//Display returned value
	cout<<"Frequency of "<<iSearchElement<<" is "<<iCnt<<"\n";
	
	return 0;
}