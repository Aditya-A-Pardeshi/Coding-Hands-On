/*
Write a program which accept one number from user and on its first 4
bits. Return modified number
Mask 0000 0000 0000 0000 0000 0000 0000 1111
IP: 11100110000 - 1840
OP:	11100111111 - 1855
IP: 10110111010 - 1466
OP:	10110111111 - 1471
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo)
{
	UINT iMask = 0x0000000F;
	
	return (iNo | iMask);
}

int main()
{
	UINT iNum = 0;
	UINT bResult = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bResult = OnBit(iNum);
	
	cout<<bResult;
	
	return 0;
}