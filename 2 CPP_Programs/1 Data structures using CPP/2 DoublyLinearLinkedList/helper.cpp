//helper file for doubly linear linked list application
//include the header file created for doubly linked list application
#include "DoublyLinearLinkedList.h"
using namespace DLLL;

//definition of constructor
DoublyLinearLinkedList::DoublyLinearLinkedList()
{
	Head = NULL;
	iSize = 0;
}

void DoublyLinearLinkedList::InsertFirst(int value)
{
	//create new node
	PNODE newn = new NODE;
	//initialise the new node
	newn->data = value;
	newn->next = NULL;
	newn->prev = NULL;
	
	//Linked list is empty, attach newn to Head
	if(Head == NULL)
	{
		Head = newn;
	}
	//Linked list is not empty
	else
	{
		newn->next = Head;
		Head->prev = newn;
		Head = newn;
	}
	iSize++;
}

void DoublyLinearLinkedList::InsertLast(int value)
{
	//create new node
	PNODE newn = new NODE;
	//initialise the new node
	newn->data = value;
	newn->next = NULL;
	newn->prev = NULL;
	
	//Linked list is empty, attach newn to Head
	if(Head == NULL)
	{
		Head = newn;
	}
	//Linked list is not empty
	else
	{
		//temp pointer to traverse the linked list
		PNODE temp = Head;
		//traverse till the last node
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;
	}
	iSize++;
}

void DoublyLinearLinkedList::InsertAtPos(int value, int iPos)
{
	//Invalid position
	if((iPos<1) || (iPos>iSize+1))
	{
		return;
	}
	//First position
	else if(iPos == 1)
	{
		InsertFirst(value);
	}
	//Last position
	else if(iPos == iSize+1)
	{
		InsertLast(value);
	}
	//other position
	else
	{
		//create the new node
		PNODE newn = new NODE;
		//initialise the new node
		newn->data = value;
		newn->next = NULL;
		newn->prev = NULL;
		
		//temp pointer to traverse
		PNODE temp = Head;
		//traverse till one node before position
		for(int i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		//now temp is pointing to one node before position
		//insert newn after temp
		newn->prev = temp;
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		
		iSize++;
	}
}

void DoublyLinearLinkedList::DeleteFirst()
{
	//Linked list is empty, do nothing
	if(Head == NULL)
	{
		return;
	}
	//Linked list is not empty
	else
	{
		PNODE temp = Head;
		Head->next->prev = NULL;
		Head = Head->next;
		delete temp;
	}
	iSize--;
}
void DoublyLinearLinkedList::DeleteLast()
{
	//Linked List is empty, do nothing
	if(Head == NULL)
	{
		return;
	}
	//Linked list is not empty
	else
	{
		//temp pointer to traverse the linked list
		PNODE temp = Head;
		//traverse till second last node
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		//now temp is pointing to second last node
		PNODE temp2 = temp->next;
		temp->next = NULL;
		delete temp->next;
	}
	iSize--;
}

void DoublyLinearLinkedList::DeleteAtPos(int iPos)
{
	//invalid position, do nothing
	if((iPos<1) || (iPos>iSize))
	{
		return;
	}
	//First position
	else if(iPos == 1)
	{
		DeleteFirst();
	}
	//Last position
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	//other position
	else
	{
		//temp pointer to traverse the linked list
		PNODE temp = Head;
		//traverse till one node before position
		for(int i = 1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		//now temp is pointing to one node before the position
		PNODE temp2 = temp->next;
		
		temp->next = temp->next->next;
		temp->next->prev = temp;
		delete temp2;
		
		iSize--;
	}
}



//definition of Display function
void DoublyLinearLinkedList::Display()
{
	PNODE temp = Head;
	//traverse the linked list till end
	while(temp != NULL)
	{
		cout<<temp->data<<" <-> ";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

//definition of Count function
int DoublyLinearLinkedList::Count()
{
	return iSize;
}