/*
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers
iNum1: 00000000000000000000011100110000 - 1840
iNum1: 00000000000000000010010100110000 - 9520
OP: 5 6 9 11
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

void CommonOnBits(UINT iNo1, UINT iNo2)
{
	UINT iMask = 0x00000001;
	
	for(int i=1;i<=32;i++)
	{
		iMask = 0x00000001;
		iMask = iMask<<(i-1);
		if(((iNo1 & iMask) == iMask) && ((iNo2 & iMask) == iMask))
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	UINT iNum1 = 0;
	UINT iNum2 = 0;
	
	cout<<"Enter number1:\n";
	cin>>iNum1;
	cout<<"Enter number2:\n";
	cin>>iNum2;
	
	CommonOnBits(iNum1,iNum2);
	
	return 0;
}