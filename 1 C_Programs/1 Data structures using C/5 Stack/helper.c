//helper file for Stack application

//include header file created for this application
#include"header.h"

//Definition of Push function
void Push(PPNODE Head, int iValue)
{
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	newn->data = iValue;
	newn->next = NULL;
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

//Definition of Pop function
int Pop(PPNODE Head)
{
	int iRet = 0;
	PNODE temp = NULL;
	if(*Head == NULL)
	{
		printf("Stack is empty\n");
		return -1;
	}
	temp = *Head;
	iRet = (*Head)->data;
	*Head = (*Head)->next;
	free(temp);
	return iRet;
}

//Definition of Peep function
int Peep(PNODE Head)
{
	int iRet = 0;
	
	if(Head == NULL)
	{
		printf("Stack is empty\n");
		return -1;
	}
	iRet = (Head)->data;
	
	return iRet;
}

//Definition of Display function
void Display(PNODE Head)
{
	if(Head == NULL)
	{
		printf("Stack is empty\n");
		return;
	}
	
	while(Head != NULL)
	{
		printf("| %d |->",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

//Definition of Count function
int Count(PNODE Head)
{
	int iCnt = 0;
	if(Head != NULL)
	{
		while(Head != NULL)
		{
			iCnt++;
			Head = Head -> next;
		}
	}
	return iCnt;
}
