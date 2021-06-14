/*
Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	//variable to hold file descriptor
	int fd = 0;
	
	char fname[20] = {'\0'};
	cout<<"Enter file name:\n";
	cin>>fname;
	
	fd = creat(fname,0777);
	if(fd == -1)
	{
		cout<<"Unable to create the file\n";
		return -1;
	}
	else
	{
		cout<<"File successfully created\n";
	}
	
	//close the file
	close(fd);
	
	return 0;
}