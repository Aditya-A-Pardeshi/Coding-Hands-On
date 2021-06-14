/*
Write a program which accepts file name and one count from user and read that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

DisplayN(char name[],int no)
{
	int iRet1 = 0;
	int iRet2 = 0;
	int fd = 0;
	char *ch = NULL;
	
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	ch = (char*) malloc(no*sizeof(char));
	
	iRet1 = read(fd,ch,no);
	iRet2 = write(1,ch,iRet1);
	close(fd);
}

int main()
{
	char fname[30] = {'\0'};
	int no = 0;
	
	printf("Enter file name:\n");
	scanf("%s",fname);
	
	fflush(stdin);
	
	printf("Enter number of charaters to read:\n");
	scanf("%d",&no);
	
	DisplayN(fname,no);
	
	return 0;
}