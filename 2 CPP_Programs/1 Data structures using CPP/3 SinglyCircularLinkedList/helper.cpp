//helper file for singly circular linked list application

//include the header file created for the application
#include"SinglyCircularLinkedList.h"
namespace SCLL
{
//Definition of constructor
SinglyCircularLinkedList::SinglyCircularLinkedList()		
{
	Head = NULL;
	Tail = NULL;
	iSize = 0;
}

void SinglyCircularLinkedList::InsertFirst(int iValue)
{
	//create e new node
	PNODE newn = new NODE;
	//initialise the new node
	newn->data = iValue;
	newn->next = NULL;
	
	//Linked list is empty
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	//Linked list is not empty
	else
	{
		newn->next = Head;
		Head = newn;
	}
	Tail->next = Head;
	iSize++;
}

void SinglyCircularLinkedList::InsertLast(int iValue)
{
	//create new node
	PNODE newn = new NODE;
	//initialise new node
	newn->data = iValue;
	newn->next = NULL;
	
	//Linked list is empty
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	//Linked list is not empty
	//traverse till last node
	else
	{
		Tail->next = newn;
		Tail = newn;
	}
	Tail->next = Head;
	iSize++;
}

void SinglyCircularLinkedList::InsertAtPos(int iValue, int iPos)
{
	//Invalid position, do nothing
	if((iPos<1) || (iPos>iSize+1))
	{
		return;
	}
	//First position
	else if(iPos == 1)
	{
		InsertFirst(iValue);
	}
	//Last position
	else if(iPos == iSize+1)
	{
		InsertLast(iValue);
	}
	//other position
	else
	{
		//create new node
		PNODE newn = new NODE;
		//initialise the node
		newn->data = iValue;
		newn->next = NULL;
		
		//traverse till one node before the position
		PNODE temp = Head;
		for(int i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		//now temp points to one node before position
		newn->next = temp->next;
		temp->next = newn;	
		
		iSize++;
	}
}

void SinglyCircularLinkedList::DeleteFirst()
{
	//if linked list is empty, do nothing
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	//linked list is not empty
	else
	{
		PNODE temp = Head;
		Head = Head->next;
		Tail->next = Head;
		delete temp;
	}
	iSize--;
}

void SinglyCircularLinkedList::DeleteLast()
{
	//linked list is empty, do nothing
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	//linked list is not empty
	else
	{
		PNODE temp = Head;
		//traverse till one node before last node
		while(temp->next != Tail)
		{
			temp = temp->next;
		}
		delete (temp->next);
		temp->next = Head;
		Tail = temp;
	}
	iSize--;
}

void SinglyCircularLinkedList::DeleteAtPos(int iPos)
{
	//invalid position
	if((iPos<1) || (iPos>iSize))
	{
		return;
	}
	//first position
	else if(iPos == 1)
	{
		DeleteFirst();
	}
	//last position
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	//other position
	else
	{
		PNODE temp = Head;
		for(int i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		PNODE temp2 = temp->next;
		temp->next = temp->next->next;
		delete temp2;
		
		iSize--;
	}
}

void SinglyCircularLinkedList::Display()
{
	PNODE temp = Head;
	do
	{
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}while(temp != Tail);
	cout<<"NULL\n";
}

int SinglyCircularLinkedList::Count()
{
	return iSize;
}
}