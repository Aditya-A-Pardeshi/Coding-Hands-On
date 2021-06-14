/*
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number
Mask 1111 1111 1111 1111 1111 1111 1011 1111
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
	UINT iPos = 7;
	UINT bResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = OffBit(iNum,iPos);
	cout<<bResult;
	
	return 0;
}