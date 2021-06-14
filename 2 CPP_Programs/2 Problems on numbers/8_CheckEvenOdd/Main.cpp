/*
Accept number from user and check whether number is even or odd
*/

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNum)
{
	if(iNum%2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	bRet = CheckEven(iNo);
	if(bRet == TRUE)
	{
		cout<<"Even\n";
	}
	else
	{
		cout<<"Odd\n";
	}
	
	return 0;
}