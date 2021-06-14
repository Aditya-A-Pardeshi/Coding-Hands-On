/*
"Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE "
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckSmall(char ch)
{
	if((ch>='a') && (ch<='z'))
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
	
	bResult = CheckSmall(ch);
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