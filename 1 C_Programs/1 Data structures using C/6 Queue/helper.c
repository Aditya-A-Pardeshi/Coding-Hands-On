//helper file for Queue application
//include header file created for this application
#include"header.h"

//function definitions
void EnQueue(PPNODE Head,int iValue)
{
	PNODE newn = NULL;
	//create node
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise the element
	newn->data = iValue;
	newn->next = NULL;
	
	//if Queue is empty
	if(*Head == NULL)
	{
		*Head = newn;
	}
	//Queue is not empty
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

//Definition of DeQueue
void DeQueue(PPNODE Head)
{
	PNODE temp = *Head;
	//travers till second last node
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d |->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}