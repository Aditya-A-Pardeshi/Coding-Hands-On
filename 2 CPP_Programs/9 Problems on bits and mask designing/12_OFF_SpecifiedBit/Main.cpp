/*
Write a program which accept one number and position from user and off
that bit. Return modified number
IP: 11100110000 - 1840
iPos = 5
OP: 11100100000
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = ~(iMask<<(iPos-1));
	
	return (iNo & iMask);
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
	
	iResult = OffBit(iNum,iPos);
	cout<<iResult;
	
	return 0;
}