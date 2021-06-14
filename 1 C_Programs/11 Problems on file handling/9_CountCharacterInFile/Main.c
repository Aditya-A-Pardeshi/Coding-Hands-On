/*
4. Write a program which accepts file name and one character from user and
count number of occurrences of that characters from that file.
Input : Demo.txt ‘M’
Output : Frequency of M is 7 
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int CountChar(char name[],char ch)
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
			if(buffer[i]==ch)
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
	char ch = '\0';
	int iCnt = 0;
	
	printf("Enter file name:\n");
	scanf("%s",fname);
	
	fflush(stdin);
	
	printf("Enter character to search:\n");
	scanf("%c",&ch);
	
	iCnt = CountChar(fname,ch);
	printf("Frequency of %c is %d",ch,iCnt);
	
	return 0;
}