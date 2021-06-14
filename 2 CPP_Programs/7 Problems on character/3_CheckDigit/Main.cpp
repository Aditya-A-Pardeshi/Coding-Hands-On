/*
"Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE"
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckDigit(char ch)
{
	if((ch>='0') && (ch<='9'))
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
	char ch = '\0';
	BOOL bResult = FALSE;
	
	cout<<"Enter character:\n";
	cin>>ch;
	
	bResult = CheckDigit(ch);
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}