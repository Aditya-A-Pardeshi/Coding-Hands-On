/*
3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>		//header file that controls file
#include<unistd.h>		//universal standard

void CreateFile(char name[])
{
	int fd = 0;
	int ret = 0;
	char buffer[1024] = {'\0'};
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return;
	}
	else
	{
		while((ret = read(fd,buffer,1024)) != 0)
		{
			write(1,buffer,ret);
		}
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

