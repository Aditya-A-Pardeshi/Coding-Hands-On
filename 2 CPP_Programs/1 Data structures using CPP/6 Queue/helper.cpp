//helper file for Queue application
//include header file created for this application
#include "Queue.h"
using namespace Nqueue;

//Definition of constructor
Queue::Queue()
{
	Head = NULL;
	iSize = 0;
}

//Definition of Enqueue
void Queue::Enqueue(int iNo)
{
	//create new node
	PNODE newn = new NODE;
	//initialise the node
	newn->data = iNo;
	newn->next = NULL;
	
	//Queue is empty
	if (Head == NULL)
	{
		Head = newn;
	}
	//Queue is not empty
	else
	{		
		newn->next = Head;
		Head = newn;
	}
	iSize++;
}

//Definition of Dequeue
void Queue::Dequeue()
{
	//Queue is empty
	if(Head == NULL)
	{
		return;
	}
	//Queue is not empty, traverse till second last node
	else
	{
		//temp pointer to traverse
		PNODE temp = Head;
		//traverse till second last node
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
	iSize--;
}

//Definition of Display function
void Queue::Display()
{
	//temp pointer to traverse the queue
	PNODE temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

int Queue::Count()
{
	return iSize;
}
