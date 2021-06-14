//Implementation of Queue using CPP
//Include header file created for this application
#include "Queue.h"
using namespace Nqueue;

int main()
{
	//variable to hold node data
	int iNo = 0;
	//variable to hold user choice
	int choice = 1;
	//Create Queue object
	Queue *obj = new Queue;
	
	while(choice != 0)
	{
	cout<<"-------------------------------\n";
	cout<<"Enter choice\n";
	cout<<"-------------------------------\n";
	cout<<"1. Insert\n";
	cout<<"2. Delete\n";
	cout<<"3. Display elements\n";
	cout<<"4. Count elements\n";
	cout<<"0. Exit the application\n";
	cout<<"-------------------------------\n";
	cin>>choice;
	
	switch(choice)
	{		
		case 1:
			cout<<"Enter number\n";
			cin>>iNo;
			obj->Enqueue(iNo);
			break;
		
		case 2:
			obj->Dequeue();
			break;
		
		case 3:
			cout<<"Contents of linked list are: \n";
			obj->Display();
			break;
		
		case 4:
			cout<<"Number of elements in linked list are "<<obj->Count()<<"\n";
			break;
			
		case 0:
			cout<<"Thanks for using the application\n";
			break;
			
		default:
			cout<<"Invalid choice\n";
	}		//end of switch	
	}		//end of while
	return 0;
}