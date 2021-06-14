/*
Write a program which accept one number from user and print that number of even numbers on screen
Input : 7
Output: 2 4 6 8 10 12 14 
*/

#include<iostream>
using namespace std;

void PrintEven(int iNum)
{
	int i = 2;
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	while(iNum != 0)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
			iNum--;
		}
		i++;
	}
	cout<<"\n";
}

int main()
{
	int iNo = 0;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//Call to function
	PrintEven(iNo);
	
	return 0;
}