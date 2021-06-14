/*
Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16 
*/

using namespace std;
#include<iostream>

void Display(int iNum)
{
	int i=2;
	while(iNum >0)
	{
		if(i%2 == 0)
		{
			cout<<i<<" ";
			iNum--;
		}
		i++;
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
