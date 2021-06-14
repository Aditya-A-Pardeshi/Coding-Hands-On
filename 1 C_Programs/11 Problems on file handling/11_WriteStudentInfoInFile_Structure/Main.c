/*
1. Write a program which accept information of students from user and
write that information into the file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
	char name[30];
	int marks;
	int age;
};

void WriteFile(struct student *sp, char *filename)
{
	int fd = 0;
	int ret = 0;
	fd = open(filename,O_WRONLY | O_CREAT,0777);
	if(fd == -1)
	{
		printf("Unable to open file %s",filename);
		return;
	}
	ret = write(fd,sp,sizeof(*sp));
	if(ret == -1)
	{
		printf("Unable to write to file %s",filename);
		return;
	}
	printf("Data successfully written\n");
	close(fd);
}

void ReadFile(char *filename)
{
	int fd = 0;
	int ret = 0;
	struct student sobj;
	fd = open(filename,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file %s",filename);
		return;
	}
	
	ret = read(fd,&sobj,sizeof(sobj));
	if(ret == -1)
	{
		printf("Unable to read data\n");
		close(fd);
		return;
	}
	
	printf("Data from file is:\n");
	printf("Student name: %s\nStudent marks: %d\nStudent age: %d\n",sobj.name,sobj.marks,sobj.age);
	close(fd);
}

int main()
{
	struct student sobj;
	char fname[30] = {'\0'};
	
	printf("Enter student name:\n");
	scanf("%[^\n]s",&sobj.name);
	
	printf("Enter student marks:\n");
	scanf("%d",&sobj.marks);
	
	printf("Enter student name:\n");
	scanf("%d",&sobj.age);
	
	fflush(stdin);
	
	printf("Enter file name:\n");
	scanf("%[^\n]s",fname);
	
	WriteFile(&sobj,fname);
	ReadFile(fname);
	return 0;
}