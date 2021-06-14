/*
Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully
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
	
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	else
	{
		cout<<"File successfully opened\n";
	}
	
	//close the file
	close(fd);
	
	return 0;
}