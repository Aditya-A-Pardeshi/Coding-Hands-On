/*
Program to print 5 times “Hello World” on screen
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i = 0;i<5;i++)
	{
		cout<<"Hello World"<<"\n";
	}
}

int main()
{
	int iNo = 5;
	
	Display(iNo);
	
	return 0;
}