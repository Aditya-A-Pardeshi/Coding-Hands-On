/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M a r v e l l o u s
 M a r v e l l o u
 M a r v e l l o
 M a r v e l l
 M a r v e l
 M a r v e
 M a r v
 M a r
 M a
 M
*/

#include<iostream>
using namespace std;

void Display(char arr[])
{
	int i = 0;
	int iCnt = 0;
	while(arr[i] != 0)
	{
		iCnt++;
		i++;
	}
	
	for(int i=iCnt;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	char str[20] = {'\0'};
	cout<<"Enter string:\n";
	cin>>str;
	
	Display(str);
	
	return 0;
}