/*
Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i=iNum;i>=1;i--)
	{
		cout<<i<<" # ";
	}
	cout<<"\n";
}

int main()
{
	int iNo = 0;
	
	cout<<"Enter number:\n";
	cin>>iNo;
	
	Display(iNo);
	
	return 0;
}