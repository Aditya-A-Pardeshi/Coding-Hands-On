/*
2. Write a program which read all the information of students from the
file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

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
	lseek(fd,0,SEEK_END);
	ret = write(fd,sp,sizeof(*sp));
	if(ret == -1)
	{
		printf("Unable to write to file %s",filename);
		return;
	}
	
	close(fd);
}

void ReadFile(char *filename)
{
	int fd = 0;
	int ret = 0;
	int i = 1;
	struct student sobj;
	fd = open(filename,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file %s",filename);
		return;
	}
	printf("Data from file is:\n");
	while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
	{
		printf("Student%d name: %s\nStudent%d marks: %d\nStudent%d age: %d\n",i,sobj.name,i,sobj.marks,i,sobj.age);
		i++;
	}
	close(fd);
}

int main()
{
	int no = 0,i = 0;
	struct student sobj;
	char fname[30] = {'\0'};
	
	printf("Enter file name:\n");
	scanf("%[^\n]s",fname);
	
	fflush(stdin);
	
	printf("Enter number of students:\n");
	scanf("%d",&no);
	
	fflush(stdin);
	
	for(i = 0;i<no;i++)
	{
		printf("Enter name of student%d:\n",i+1);
		scanf("%[^\n]s",&sobj.name);
		
		fflush(stdin);
	
		printf("Enter marks of student%d:\n",i+1);
		scanf("%d",&sobj.marks);
	
		printf("Enter age of student%d:\n",i+1);
		scanf("%d",&sobj.age);
		fflush(stdin);
		
		WriteFile(&sobj,fname);
		
		memset(&sobj,0,sizeof(sobj));
	}
	
	ReadFile(fname);
	return 0;
}