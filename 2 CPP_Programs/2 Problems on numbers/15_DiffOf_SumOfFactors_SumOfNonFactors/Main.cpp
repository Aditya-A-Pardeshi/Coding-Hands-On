/*
Write a program which accept number from user and return difference between summation of all its factors and non factors
Input : 12
Output : -34 (16 - 50) 
*/

#include<iostream>
using namespace std;

int FindSum(int iNum)
{
	int iSumFactor = 0;
	int iSumNonfactor = 0;
	
	//Updater for negative number
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	for(int i=1;i<=iNum;i++)
	{
		if(iNum%i == 0)
		{
			cout<<"factor: "<<i<<" ";
			iSumFactor = iSumFactor + i;
		}
		else
		{
			cout<<"non factor: "<<i<<" ";
			iSumNonfactor = iSumNonfactor + i;
		}
	}
	return (iSumFactor - iSumNonfactor);
}

int main()
{
	int iNo = 0;
	int iSum = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//Call to function
	iSum = FindSum(iNo);
	
	//Display return value
	cout<<"Answer: "<<iSum<<"\n";
	
	return 0;
}
