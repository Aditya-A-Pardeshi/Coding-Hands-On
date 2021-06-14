/*
"Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %"
*/

using namespace std;
#include<iostream>

void ToggleCase(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		cout<<(char)(ch+32)<<"\n";
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		cout<<(char)(ch-32)<<"\n";
	}
	else
	{
		cout<<ch<<"\n";
	}
}

int main()
{
	char ch = '\0';
	cout<<"Enter character:\n";
	cin>>ch;
	
	ToggleCase(ch);
	
	return 0;
}