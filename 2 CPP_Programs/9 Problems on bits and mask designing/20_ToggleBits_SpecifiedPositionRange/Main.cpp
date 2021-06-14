/*
Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range
IP: 7984 - 1111100110000
iStart = 2
iEnd = 7
IP: 7984 - 1111100110000
OP: 8014 - 1111101001110
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ToggleBits(UINT iNo, int iStart, int iEnd, UINT *iResult)
{
	BOOL bAns = FALSE;
	if((iStart>iEnd) || (iStart<0) || (iEnd>32))
	{
		cout<<"Invalid range\n";
		return bAns;
	}
	else
	{
		UINT iMask = 0x00000001;
		for(int i=iStart;i<=iEnd;i++)
		{
			iMask = 0x00000001;
			iMask = iMask<<(i-1);
			iNo = iNo ^ iMask;
		}
		*iResult = iNo;
	}
	return TRUE;
}


int main()
{
	UINT iNum = 0;
	UINT iResult = 0;
	int iStart = 0;
	int iEnd = 0;
	BOOL bAns = FALSE;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	cout<<"Enter start position:\n";
	cin>>iStart;
	
	cout<<"Enter end position:\n";
	cin>>iEnd;
	
	bAns = ToggleBits(iNum,iStart,iEnd,&iResult);
	if(bAns == TRUE)
	{
		cout<<iResult<<"\n";
	}
	
	return 0;
}