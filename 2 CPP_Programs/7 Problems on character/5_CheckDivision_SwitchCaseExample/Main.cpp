/*
"Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM"
*/

#include<iostream>
using namespace std;

int main()
{
	char div = '\0';
	
	cout<<"Enter division:\n";
	cin>>div;
	
	switch(div)
	{
		case 'A':
		case 'a':
			cout<<"Your exam at 7 AM\n";
			break;
			
		case 'B':
		case 'b':
			cout<<"Your exam at 8.30 AM\n";
			break;
			
		case 'C':
		case 'c':
			cout<<"Your exam at 9.20 AM\n";
			break;
			
		case 'D':
		case 'd':
			cout<<"Your exam at 10.30 AM\n";
			break;
			
		default:
			cout<<"Invalid division\n";
		
		
		
	}
	
	return 0;
}