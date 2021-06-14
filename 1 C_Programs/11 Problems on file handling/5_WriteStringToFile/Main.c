/*
5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
 Hello World
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

FileWrite(char *fname, char str[])
{
	int fd = 0;
	int iCnt = 0;
	int iRet = 0;
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	iCnt = lseek(fd,0,SEEK_END);
	
	iRet = write(fd,str,strlen(str));
	
	close(fd);
}

int main()
{
	char fname[30] = {'\0'};
	char arr[30] = {'\0'};
	
	printf("Enter file name:\n");
	scanf("%[^\n]s",fname);
	
	fflush(stdin);
	
	printf("Enter string to write to file:\n");
	scanf("%[^\n]s",arr);
	
	FileWrite(fname,arr);
	
	return 0;
}