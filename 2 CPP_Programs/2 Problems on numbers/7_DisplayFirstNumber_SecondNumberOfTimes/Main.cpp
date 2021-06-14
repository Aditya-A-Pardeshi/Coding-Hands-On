/*
Accept two numbers from user and display first number in second number of times
*/

#include<iostream>
using namespace std;

void Display(int iNum1, int iNum2)
{
	for(int i=0;i<iNum2;i++)
	{
		cout<<iNum1<<" ";
	}
	cout<<"\n";
}

int main()
{
	int iNo1 = 0,iNo2 = 0;
	
	//Accept the numbers from user
	cout<<"Enter first number:\n";
	cin>>iNo1;
	
	cout<<"Enter second number:\n";
	cin>>iNo2;
	
	Display(iNo1,iNo2);
	
	return 0;
}