/*
"Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :"
*/

using namespace std;
#include<iostream>

void ToggleCase(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		for(int i=ch;i<='Z';i++)
		{
			cout<<(char)i<<" ";
		}
		cout<<"\n";
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		for(int i=ch;i>='a';i--)
		{
			cout<<(char)i<<" ";
		}
		cout<<"\n";
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