/*
Write application which accept file name from user and one string from user. Write that string at the end of file
Input : Demo.txt
Hello World
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	//variable to hold file descriptor
	int fd = 0;
	//variable to hold return value of lseek
	int ret = 0;
	char str[30] = {'\0'};
	
	char fname[20] = {'\0'};
	cout<<"Enter file name:\n";
	cin>>fname;
	fflush(stdin);
	cout<<"Enter string:\n";
	scanf("%[^\n]s",str);
	
	fd = open(fname,O_WRONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	
	ret = lseek(fd,0,SEEK_END);
	
	write(fd,str,strlen(str));
	
	//close the file
	close(fd);
	
	return 0;
}