/*
Write a program that divides two numbers
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Divide(int iNo1, int iNo2, float *fAns)
{
	//If second number is 0 return FALSE
	if(iNo2 == 0)
	{
		return FALSE;
	}
	//else proceed with division and return TRUE
	*fAns = (float)iNo1/(float)iNo2;
	return TRUE;
}

int main()
{
	int iNum1 = 0, iNum2 = 0;
	float iResult = 0.0f;
	BOOL bRet = FALSE;
	
	cout<<"Enter first number:\n";
	cin>>iNum1;
	
	cout<<"Enter second number:\n";
	cin>>iNum2;
	
	bRet = Divide(iNum1,iNum2,&iResult);
	if(bRet == FALSE)
	{
		cout<<"Invalid numbers\n";
	}
	else
	{
		cout<<"Result: "<<iResult<<"\n";
	}
	
	return 0;
}