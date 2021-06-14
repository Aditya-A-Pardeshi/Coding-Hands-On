/*
Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i=1;i<=iNum;i++)
	{
		cout<<" # "<<i<<" *";
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