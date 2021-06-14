/*
Write a program which accept oinformation of students from user and write that information into the file.
*/

using namespace std;
#include<stdio.h>
#include<iostream>
#include<fcntl.h>
#include<stdlib.h>

struct Student
{
	char name[20];
	int age;
	int marks;
};

void WriteData(char file[],struct Student *s1)
{
	int fd = 0;
	int ret = 0;
	
	fd = open(file,O_WRONLY | O_CREAT,0777);
	if(fd == -1)
	{
		cout<<"Unable to openn file\n";
		return;
	}
	
	ret = write(fd,s1,sizeof(struct Student));
	if (ret == -1)
	{
		cout<<"Unable to write to file\n";
		return;
	}
	cout<<"Data written successfully\n";
	
	close(fd);
}

void ReadData(char file[])
{
	int fd = 0;
	int ret = 0;
	struct Student sobj;
	
	fd = open(file,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open file\n";
		return;
	}
	ret = read(fd,&sobj,sizeof(struct Student));
	cout<<"Student name: "<<sobj.name<<"\n";
	cout<<"Student age: "<<sobj.age<<"\n";
	cout<<"Student marke: "<<sobj.marks<<"\n";
	
	close(fd);
}

int main()
{
	struct Student sobj;
	char fname[20] = {'\0'};
	
	cout<<"Enter filename:\n";
	cin>>fname;
	
	cout<<"Enter student name:\n";
	cin>>sobj.name;
	
	cout<<"Enter student age:\n";
	cin>>sobj.age;
	
	cout<<"Enter student marks:\n";
	cin>>sobj.marks;
	
	WriteData(fname,&sobj);
	
	ReadData(fname);
	
	return 0;
}