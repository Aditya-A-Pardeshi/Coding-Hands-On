/*
Write a program which accept one number and position from user and off
that bit. Return modified number
IP: 11100110000 - 1840
iPos = 7
OP: 11101110000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = iMask<<(iPos-1);
	
	return (iNo | iMask);
}

int main()
{
	UINT iNum = 0;
	UINT iPos = 0;
	UINT iResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	cout<<"Enter bit position:\n";
	cin>>iPos;
	
	iResult = OnBit(iNum,iPos);
	cout<<iResult;
	
	return 0;
}