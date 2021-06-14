//Singly circular linked list in CPP

//include the header file created for the application
#include "SinglyCircularLinkedList.h"
using namespace SCLL;

int main()
{
	//create object of SinglyCircularLinkedList class
	SinglyCircularLinkedList obj1;
	//variable for node data
	int iNo = 0;
	//variable for insert or delete position
	int iPos = 0;
	//variable for storing number of elements in liked list
	int iCnt = 0;
	//variable to hold the user choice
	int choice =1;
	cout<<"=============================================\n";
	cout<<"Singly Circular Linked List Application using CPP\n";
	cout<<"=============================================\n";
	while(choice)
	{
		cout<<"Enter your choice\n";
		cout<<"1: Insert First\n";
		cout<<"2: Insert Last\n";
		cout<<"3: Insert at position\n";
		cout<<"4: Delete First\n";
		cout<<"5: Delete Last\n";
		cout<<"6: Delete at position\n";
		cout<<"7: Display\n";
		cout<<"8: Count elements\n";
		cout<<"0: Exit\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter number:\n";
				cin>>iNo;
				obj1.InsertFirst(iNo);
				break;
				
			case 2:
				cout<<"Enter number:\n";
				cin>>iNo;
				obj1.InsertLast(iNo);
				break;
				
			case 3:
				cout<<"Enter number:\n";
				cin>>iNo;
				cout<<"Enter insert position:\n";
				cin>>iPos;
				obj1.InsertAtPos(iNo,iPos);
				break;
				
			case 4:
				obj1.DeleteFirst();
				break;
				
			case 5:
				obj1.DeleteLast();
				break;
				
			case 6:
				cout<<"Enter delete position:\n";
				cin>>iPos;
				obj1.DeleteAtPos(iPos);
				break;
			
			case 7:
				obj1.Display();
				break;
				
			case 8:
				iCnt = obj1.Count();
				cout<<"Number of elements in linked list are "<<iCnt<<"\n";
				break;
			
			case 0:
				cout<<"Thank you for using the application\n";
				break;
				
			default:
				cout<<"Incorrect choice\n";
		}		//end of switch
	}			//end of while
	return 0;	//return from main
}