/*
Doubly Circular Linked List Application using C++ programming language
*/

#include"DoublyCircularLinkedList.h"

int main()
{
	int iNum = 0;
	int iPos = 0;
	int choice = 1;
	int iCnt = 0;
	DoublyCircularLinkedList *dobj = new DoublyCircularLinkedList;
			
	while(choice != 0)
	{
		cout<<"---------------------------\n";
		cout<<"Enter your choice: \n";
		cout<<"---------------------------\n";
		cout<<"1. InsertFirst\n";
		cout<<"2. InsertLast\n";
		cout<<"3. InsertAtPos\n";
		cout<<"4. DeleteFirst\n";
		cout<<"5. DeleteLast\n";
		cout<<"6. DeleteAtPos\n";
		cout<<"7. CountElements\n";
		cout<<"8. DisplayElements\n";
		cout<<"0. Exit\n";
		cout<<"---------------------------\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter number: \n";
				cin>>iNum;
				dobj->InsertFirst(iNum);
				break;
			
			case 2:
				cout<<"Enter number: \n";
				cin>>iNum;
				dobj->InsertLast(iNum);
				break;
			
			case 3:
				cout<<"Enter number: \n";
				cin>>iNum;
				cout<<"Enter insert position: \n";
				cin>>iPos;
				dobj->InsertAtPos(iNum,iPos);
				break;			
			
			case 4:
				dobj->DeleteFirst();
				break;
			
			case 5:
				dobj->DeleteLast();
				break;			
			
			case 6:
				cout<<"Enter delete position: \n";
				cin>>iPos;
				dobj->DeleteAtPos(iPos);
				break;
			
			case 7:
				iCnt = dobj->CountElements();
				cout<<"Number of elements: "<<iCnt<<"\n";
				break;
			
			case 8:
				dobj->DisplayElements();
				break;
			
			case 0:
				cout<<"Thank you for using the application!!\n";
				break;
			
			default:
				cout<<"Wrong choice\n";
		}//end of switch		
	}	//end of while
	delete dobj;
	return 0;
}//end of main