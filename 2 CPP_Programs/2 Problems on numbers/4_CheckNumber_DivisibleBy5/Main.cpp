/*
Accept one number and check whether it is divisible by 5 or not
*/

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckNumber(int iNo)
{
	if(iNo%5 == 0)
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
	
	//Call function
	bRet = CheckNumber(iNo);
	
	//check return value
	if(bRet == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}