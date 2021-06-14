/*
Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number
Mask 1111 1111 1111 1111 1111 1101 1011 1111
IP: 11111111010 - 2042
OP:	10110111010 - 1466
IP: 10110111010 - 1466
OP:	11111111010 - 2042
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	iMask = iMask<<(iPos-1);
	
	return (iNo ^ iMask);
}

int main()
{
	UINT iNum = 0;
	UINT iPos1 = 7;
	UINT iPos2 = 10;
	
	UINT bResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = ToggleBit(iNum,iPos1);
	bResult = ToggleBit(bResult,iPos2);
	
	cout<<bResult;
	
	return 0;
}