/*
1. Write a program which accepts file name from user and count number of
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int CountCapital(char name[])
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
			if((buffer[i]>='A') && (buffer[i]<='Z'))
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
	
	iCnt = CountCapital(fname);
	printf("Number of capital characters are %d",iCnt);
	
	return 0;
}