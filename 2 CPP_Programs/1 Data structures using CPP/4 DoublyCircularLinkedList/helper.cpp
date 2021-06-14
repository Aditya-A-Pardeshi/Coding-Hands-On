/*
Helper file for Doubly Circular Linked List Application using C++ programming language
*/

#include"DoublyCircularLinkedList.h"

//definition of constructor
DoublyCircularLinkedList::DoublyCircularLinkedList()
{
	Head = NULL;
	Tail = NULL;
	Size = 0;
}

void DoublyCircularLinkedList::InsertFirst(int iNo)
{
	//create and initialise node
	struct Node *newn = new (struct Node);
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	//if LL is empty
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	//if LL is has at least one node
	else
	{
		newn->next = Head;
		Head->prev = newn;
		Head = newn;				
	}
	Head->prev = Tail;
	Tail->next = Head;
	Size++;
}

void DoublyCircularLinkedList::InsertLast(int iNo)
{
	struct Node *newn = new (struct Node);
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn->prev = Tail;
		Tail->next = newn;
		Tail = newn;
	}
	
	Head->prev = Tail;
	Tail->next = Head;
	Size++;
}

void DoublyCircularLinkedList::InsertAtPos(int iNo,int iPos)
{
	if((iPos<0) || (iPos>Size+1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(iNo);
	}
	else if(iPos == Size+1)
	{
		InsertLast(iNo);
	}
	else
	{
		struct Node *newn = new (struct Node);
		newn->data = iNo;
		newn->next = NULL;
		newn->prev = NULL;
		struct Node *temp = Head;
		for(int i=1;i<(iPos-1);i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		newn->prev = temp;
		temp->next->prev = newn;
		temp->next = newn;
		
		Size++;
	}
}

void DoublyCircularLinkedList::DeleteFirst()
{
	//if LL is empty do nothing
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	else
	{
		struct Node *temp = NULL;
		temp = Head;
		Head = Head->next;
		Head->prev = Tail;
		delete temp;
	}
	Size--;
}

void DoublyCircularLinkedList::DeleteLast()
{
	//LL is empty
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	//LL has one node
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	//LL has more than one nodes
	else
	{
		struct Node *temp = Tail;
		Head->prev = Tail->prev;
		Tail->prev->next = Head;
		Tail = Tail->prev;
		delete temp;
	}
	Size--;
}

void DoublyCircularLinkedList::DeleteAtPos(int iPos)
{
	if((iPos<0) || (iPos > Size))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Size)
	{
		DeleteLast();
	}
	else
	{
		struct Node *temp = Head;
		for(int i=1;i<(iPos-1);i++)
		{
			temp = temp->next;
		}
		struct Node *temp1 = temp->next;
		temp->next = temp->next->next;
		temp->next->prev = temp;
		delete temp1;
		Size--;
	}	
}

int DoublyCircularLinkedList::CountElements()
{
	return Size;	
}

void DoublyCircularLinkedList::DisplayElements()
{
	if((Head==NULL) && (Tail == NULL))
	{
		return;
	}
	struct Node *temp = Head;
	do
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp != Tail->next);
	cout<<"\n";
}