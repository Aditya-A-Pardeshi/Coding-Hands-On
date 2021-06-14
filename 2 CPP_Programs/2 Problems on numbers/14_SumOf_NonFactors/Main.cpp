/*
Write a program which accept number from user and return summation of all its non factors
Input : 12
Output : 50
*/

#include<iostream>
using namespace std;

int SumNonFactors(int iNum)
{
	int iAns = 0;
	
	//updater for negative number
	if(iNum<0)
	{
		iNum = -iNum;
	}
	
	for(int i=2;i<iNum;i++)
	{
		if(iNum%i != 0)
		{
			iAns = iAns + i;
		}
	}
	return iAns;
}

int main()
{
	int iNo = 0;
	int iSum = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//call to function
	iSum = SumNonFactors(iNo);
	
	//display return value_comp
	cout<<"Answer: "<<iSum<<"\n";
	
	return 0;
}