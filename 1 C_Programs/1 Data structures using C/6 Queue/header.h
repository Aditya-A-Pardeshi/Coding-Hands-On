//header file for Queue application
//header file for input output
#include<stdio.h>
//header file for dynamic memory allocation, malloc
#include<stdlib.h>

//structure declaration for node of Queue
struct node
{
	int data;
	struct node* next;
};

//typedefs
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//function prototypes
void EnQueue(PPNODE,int);
//-----------------------------------------------
//Function Name: 		EnQueue
//Description:			Insert element to the queue(like InsertFirst)
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void DeQueue(PPNODE);
//-----------------------------------------------
//Function Name: 		Push
//Description:			Delete element from the queue(like DeleteLast)
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void Display(PNODE);
//-----------------------------------------------
//Function Name: 		Push
//Description:			Push the element on top of the stack
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

int Count(PNODE);
//-----------------------------------------------
//Function Name: 		Push
//Description:			Push the element on top of the stack
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------