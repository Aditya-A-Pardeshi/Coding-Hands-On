/*
"Write a program which accept number from user and display its digits in reverse order
Input : 2395
Output : 5932"
*/

#include<iostream>
using namespace std;

int ReverseDigit(int iNo)
{
	int iRev = 0;
	while(iNo != 0)
	{
		iRev = (iRev*10) + (iNo%10);
		iNo = iNo/10;
	}
	return iRev;
}

int main()
{
	int iNum = 0;
	int iRev = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iRev = ReverseDigit(iNum);
	cout<<"Reverse number: "<<iRev<<"\n";
	
	return 0;
}