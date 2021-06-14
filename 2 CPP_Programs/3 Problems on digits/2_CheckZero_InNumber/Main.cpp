/*
"Write a program which accept number from user and check whether it contains 0 in it or not
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero "
*/

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNo)
{
	BOOL bAns = FALSE;
	while(iNo != 0)
	{
		if(iNo%10 == 0)
		{
			bAns = TRUE;
		}
		iNo = iNo/10;
	}
	return bAns;
}

int main()
{
	int iNum = 0;
	BOOL bRet = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	bRet = CheckZero(iNum);
	if(bRet == TRUE)
	{
		cout<<"It contains zero"<<"\n";
	}
	else
	{
		cout<<"There is no zero"<<"\n";
	}
	
	return 0;
}