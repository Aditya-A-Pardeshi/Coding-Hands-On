/*
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2) 
*/

#include<iostream>
using namespace std;

int FindDiff(int iNo)
{
	int iEvenSum = 0;
	int iOddSum = 0;
	while(iNo != 0)
	{
		if((iNo%10)%2 == 0)
		{
			iEvenSum = iEvenSum + (iNo%10);
		}
		else
		{
			iOddSum = iOddSum + (iNo%10);
		}
		iNo = iNo/10;
	}
	return (iEvenSum - iOddSum);
}

int main()
{
	int iNum = 0;
	int iResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = FindDiff(iNum);
	cout<<iResult<<"\n";
	
	return 0;
}