/*
Write a program which accepts file name and one count from user and read that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	//variable to hold file descriptor
	int fd = 0;
	//variable to hold return value of read
	int ret = 0;
	//variable for number of characters to read
	int iNum = 0;
	//buffer to read the file contents
	char *buffer = NULL;
	//variable for file name
	char fname[20] = {'\0'};
	
	cout<<"Enter file name:\n";
	cin>>fname;
	
	cout<<"Enter number of characters to read:\n";
	cin>>iNum;
	
	//create buffer dynamically
	buffer = new char[iNum];
	
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	
	ret = read(fd,buffer,iNum);
	write(1,buffer,ret);
	
	//close the file
	close(fd);
	
	return 0;
}