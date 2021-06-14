/*
1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void OpenFile(char name[])
{
	int fd = 0;
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	close(fd);
}

int main()
{
	char fname[30];
	
	printf("Enter filename:\n");
	scanf("%[^\n]s",fname);
	
	OpenFile(fname);
	
	return 0;
}

