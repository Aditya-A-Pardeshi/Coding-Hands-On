//helper file for singly linear linked list application

//include the header file created for the application
#include"SinglyLinearLinkedList.h"
namespace SLLL
{
//Definition of constructor
SinglyLinearLinkedList::SinglyLinearLinkedList()		
{
	Head = NULL;
	iSize = 0;
}

void SinglyLinearLinkedList::InsertFirst(int iValue)
{
	//create e new node
	PNODE newn = new NODE;
	//initialise the new node
	newn->data = iValue;
	newn->next = NULL;
	
	//Linked list is empty
	if(Head == NULL)
	{
		Head = newn;
	}
	//Linked list is not empty
	else
	{
		newn->next = Head;
		Head = newn;
	}
	iSize++;
}

void SinglyLinearLinkedList::InsertLast(int iValue)
{
	//create new node
	PNODE newn = new NODE;
	//initialise new node
	newn->data = iValue;
	newn->next = NULL;
	
	//Linked list is empty
	if(Head == NULL)
	{
		Head = newn;
	}
	//Linked list is not empty
	//traverse till last node
	else
	{
		PNODE temp = Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	iSize++;
}

void SinglyLinearLinkedList::InsertAtPos(int iValue, int iPos)
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

void SinglyLinearLinkedList::DeleteFirst()
{
	//if linked list is empty, do nothing
	if(Head == NULL)
	{
		return;
	}
	//linked list is not empty
	else
	{
		PNODE temp = Head;
		Head = Head->next;
		delete temp;
	}
	iSize--;
}

void SinglyLinearLinkedList::DeleteLast()
{
	//linked list is empty, do nothing
	if(Head == NULL)
	{
		return;
	}
	//linked list is not empty
	else
	{
		PNODE temp = Head;
		//traverse till one node before last node
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete (temp->next);
		temp->next = NULL;
	}
	iSize--;
}

void SinglyLinearLinkedList::DeleteAtPos(int iPos)
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

void SinglyLinearLinkedList::Display()
{
	PNODE temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

int SinglyLinearLinkedList::Count()
{
	return iSize;
}
}