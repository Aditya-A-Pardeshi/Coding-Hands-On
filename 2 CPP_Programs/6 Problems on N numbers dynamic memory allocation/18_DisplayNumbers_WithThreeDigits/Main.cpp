/*
"Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input : N : 6 
Elements : 8225 665 3 76 953 858
Output : 665 953 858 "
*/

using namespace std;
#include<iostream>

void DisplayNumber(int brr[],int iSize)
{
	int iCnt = 0;
	int temp = 0;
	for(int i = 0;i<iSize;i++)
	{
		iCnt = 0;
		temp = brr[i];
		while(temp != 0)
		{
			iCnt++;
			temp = temp/10;
		}
		if(iCnt == 3)
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
		
	DisplayNumber(arr,iSize);
	
	delete arr;
	
	return 0;
}