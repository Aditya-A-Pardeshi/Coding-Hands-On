/*
Write a program which accept one number and position from user and off
that bit. Return modified number
IP: 00000000000000000000011100110000 - 1840
OP: 11110000000000000000011100111111 - 4026533695
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask = 0xF000000F;
	
	return (iNo ^ iMask);
}

int main()
{
	UINT iNum = 0;
	UINT iResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	iResult = OnBit(iNum);
	cout<<iResult;
	
	return 0;
}