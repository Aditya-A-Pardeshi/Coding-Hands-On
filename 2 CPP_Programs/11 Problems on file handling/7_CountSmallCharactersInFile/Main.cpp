/*
Write a program which accepts file name from user and count number of small characters from that file.
Input : Demo.txt
Output : Number of small characters are 21
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
		for(int i=0;i<ret;i++)
		{
			if((buffer[i] >= 'a') && (buffer[i] <= 'z'))
			{
				iCnt++;
			}
		}
	}
	
	cout<<"Number of small characters: "<<iCnt;
	
	//close the file
	close(fd);
	
	return 0;
}