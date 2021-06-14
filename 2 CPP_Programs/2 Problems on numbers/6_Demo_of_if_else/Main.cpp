/*
Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”
*/

#include<iostream>
using namespace std;

void Display(int iNum)
{
	if(iNum<10)
	{
		cout<<"Hello\n";
	}
	else
	{
		cout<<"Demo\n";
	}
}

int main()
{
	int iNo  = 0;
	
	//Accept the number from user
	cout<<"Enter number:\n";
	cin>>iNo;
	
	//Call the function
	Display(iNo);
	
	return 0;
}