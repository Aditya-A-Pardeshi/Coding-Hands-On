/*
"Accept single digit number from user and print it into word
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number"
*/

#include<iostream>
using namespace std;

void PrintWord(int iNo)
{
	if((iNo>=0) && (iNo<=9))
	{
		if(iNo==0)
		{
			cout<<"Zero\n";
		}
		else if(iNo==1)
		{
			cout<<"One\n";
		}
		else if(iNo==2)
		{
			cout<<"Two\n";
		}
		else if(iNo==3)
		{
			cout<<"Three\n";
		}
		else if(iNo==4)
		{
			cout<<"Four\n";
		}
		else if(iNo==5)
		{
			cout<<"Five\n";
		}
		else if(iNo==6)
		{
			cout<<"Six\n";
		}
		else if(iNo==7)
		{
			cout<<"Seven\n";
		}
		else if(iNo==8)
		{
			cout<<"Eight\n";
		}
		else if(iNo==9)
		{
			cout<<"Nine\n";
		}
	}
	else
	{
		cout<<"Invalid number\n";
	}
}

int main()
{
	int iNum = 0;
	
	cout<<"Enter single digit:\n";
	cin>>iNum;
	
	PrintWord(iNum);
	
	
	return 0;
}