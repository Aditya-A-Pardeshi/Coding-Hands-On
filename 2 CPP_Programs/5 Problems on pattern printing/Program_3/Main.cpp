/*
Accept number from user and display below pattern.
Input : 5
Output : A B C D E 
*/

using namespace std;
#include<iostream>

void Display(int iNo)
{
	char ch = 'A';
	for(int i=0;i<iNo;i++)
	{
		cout<<ch<<" ";
		ch++;
	}
	cout<<"\n";
}

int main()
{
	int iNum = 0;
	
	cout<<"Enter number:\n";
	cin>>iNum;
	
	Display(iNum);

	return 0;
}