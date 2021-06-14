/*
Write a program which accept number from user and print multiplication of its factors
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
*/

#include<iostream>
using namespace std;

int MultiplyFactors(int iNum)
{
	int iAns = 1;
	
	//Updater for negative number
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	
	for(int i=2;i<=iNum/2;i++)
	{
		if(iNum%i == 0)
		{
			iAns = iAns * i;
		}
	}
	return iAns;
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	iRet = MultiplyFactors(iNo);
	//Display the return value_comp
	cout<<"Answer: "<<iRet<<"\n";
	
	return 0;
}