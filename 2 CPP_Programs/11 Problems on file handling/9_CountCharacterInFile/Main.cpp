/*
Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.
Input : Demo.txt ‘M’
Output : Frequency of M is 7
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	//variable to hold file descriptor
	int fd = 0;
	//buffer to read the file contents
	char buffer[512] = {'\0'};
	//variable to hold return value of read and write
	int ret = 0;
	//variable for count
	int iCnt = 0;
	//variable for search character
	char ch = '\0';
	
	char fname[20] = {'\0'};
	cout<<"Enter file name:\n";
	cin>>fname;
	
	cout<<"Enter character to search:\n";
	cin>>ch;
	
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	
	while((ret = read(fd,buffer,sizeof(buffer))) != 0)
	{
		for(int i=0;i<ret;i++)
		{
			if(buffer[i] == ch)
			{
				iCnt++;
			}
		}
	}
	
	cout<<"Number of whitespaces: "<<iCnt;
	
	//close the file
	close(fd);
	
	return 0;
}