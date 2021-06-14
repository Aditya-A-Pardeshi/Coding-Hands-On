/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output :
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S 
*/

using namespace std;
#include<iostream>

void Display(char arr[])
{
	int iCnt = 0;
	int i = 0;
	while(arr[i] != '\0')
	{
		iCnt++;
		i++;
	}
	cout<<iCnt<<"\n";
	for(int i=0;i<iCnt;i++)
	{
		for(int j=0;j<iCnt;j++)
		{
			if((arr[j]>='a') && (arr[j]<='z'))
			{
				cout<<(char)(arr[j]-32)<<" ";
			}
			else
			{
				cout<<arr[j]<<" ";
			}
		}
		cout<<"\n";
	}
}

int main()
{
	char str[20] = {'\0'};
	cout<<"Enter string\n";
	cin>>str;
	
	Display(str);
	
	return 0;
}