/*
Write a program which accept number from user and display all its non factors
Input : 12
Output : 5 7 8 9 10 11 
*/

using namespace std;
#include<iostream>

void DisplayNonFactors(int iNum)
{
	//updaer for negative number
	if(iNum<0)
	{
		iNum = -iNum;
	}
	for(int i=2;i<iNum;i++)
	{
		if(iNum%i != 0)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	int iNo = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//call to function
	DisplayNonFactors(iNo);
	
	return 0;
}