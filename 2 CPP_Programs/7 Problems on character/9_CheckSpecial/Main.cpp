/*
"Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE"
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckSpecial(char ch)
{
	if(((ch>=33) && (ch<=47)) || ((ch>=91) && (ch<=96)) || ((ch>=58) && (ch<=64)))
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
	
	bResult = CheckSpecial(ch);
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