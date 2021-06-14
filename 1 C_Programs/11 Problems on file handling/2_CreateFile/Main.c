/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void CreateFile(char name[])
{
	int fd = 0;
	fd = creat(name,0777);
	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File created successfully\n");
	}
	close(fd);
}

int main()
{
	char fname[30];
	
	printf("Enter filename:\n");
	scanf("%[^\n]s",fname);
	
	CreateFile(fname);
	
	return 0;
}

