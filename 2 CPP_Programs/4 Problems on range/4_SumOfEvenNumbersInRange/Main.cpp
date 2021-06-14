/*
"Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range "
*/

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL AddEven(int iStart, int iEnd, int *iAns)
{
	if((iStart>iEnd) || (iStart<0) || (iEnd<0))
	{
		cout<<"Invalid range\n";
		return FALSE;
	}
	
	for(int i=iStart;i<=iEnd;i++)
	{
		if(i%2 == 0)
		{
			*iAns = *iAns + i;
		}
	}
	return TRUE;
}

int main()
{
	int iStart = 0;
	int iEnd = 0;
	int iSum = 0;
	BOOL bRet = FALSE;
	
	cout<<"Enter start range:\n";
	cin>>iStart;
	
	cout<<"Enter end range:\n";
	cin>>iEnd;
	
	bRet = AddEven(iStart,iEnd,&iSum);
	if(bRet == TRUE)
	{	
		cout<<iSum<<"\n";
	}
	
	return 0;
}