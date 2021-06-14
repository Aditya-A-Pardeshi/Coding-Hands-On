/*
Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number
Mask 1111 1111 1111 1111 1111 1101 1011 1111
IP: 11111111010
OP:	10111111010
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = ~(iMask<<(iPos-1));
	
	return (iNo & iMask);
}

int main()
{
	UINT iNum = 0;
	UINT iPos1 = 7;
	UINT iPos2 = 10;
	UINT bResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = OffBit(iNum,iPos1);
	bResult = OffBit(bResult,iPos2);
	cout<<bResult;
	
	return 0;
}