/*
Accept one number from user and print that number of * on screen
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	for(int i=0;i<iNum;i++)
	{
		cout<<"* ";
	}
	cout<<"\n";
}

int main()
{
	int iNo = 0;
	//Accept number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//Call the function
	Display(iNo);
	
	return 0;
}