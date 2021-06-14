/*
3. Write a program which accepts file name from user and count number of
white spaces from that file.
Input : Demo.txt
Output : Number of white spaces are 13 
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int CountWhitespace(char name[])
{
	int iCnt = 0;
	int fd = 0;
	int iRet = 0;
	int i = 0;
	char buffer[512] = {'\0'};
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	while((iRet = read(fd,buffer,sizeof(buffer))) != 0)
	{
		for(i=0;i<iRet;i++)
		{
			if((buffer[i]>=' ') || (buffer[i]<='\t'))
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}

int main()
{
	char fname[30] = {'\0'};
	int iCnt = 0;
	
	printf("Enter file name:\n");
	scanf("%s",fname);
	
	iCnt = CountWhitespace(fname);
	printf("Number of whiespaces are %d",iCnt);
	
	return 0;
}