/*
4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes 
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int FileSize(char *fname)
{
	int fd = 0;
	int iCnt = 0;
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	iCnt = lseek(fd,0,SEEK_END);
	close(fd);
	return iCnt;
}

int main()
{
	char fname[30] = {'\0'};
	int size = 0;
	
	printf("Enter file name:\n");
	scanf("%s",fname);
	
	size = FileSize(fname);
	printf("File size is %d bytes\n",size);
	
	return 0;
}