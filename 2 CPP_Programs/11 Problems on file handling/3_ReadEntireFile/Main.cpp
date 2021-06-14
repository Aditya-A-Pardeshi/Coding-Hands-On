/*
Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file
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
	
	char fname[20] = {'\0'};
	cout<<"Enter file name:\n";
	cin>>fname;
	
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	
	while((ret = read(fd,buffer,sizeof(buffer))) != 0)
	{
		write(1,buffer,ret);
	}
	
	
	//close the file
	close(fd);
	
	return 0;
}