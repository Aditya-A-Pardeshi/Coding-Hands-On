//header file for stack

//header file for input output
#include<stdio.h>
//header file for dynamic memory allocation
#include<stdlib.h>

//structure declaration for stack node
struct node
{
	int data;
	struct node *next;
};

//typedefs
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//function prototypes

void Push(PPNODE, int);
//-----------------------------------------------
//Function Name: 		Push
//Description:			Push the element on top of the stack
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

int Pop(PPNODE);
//-----------------------------------------------
//Function Name: 		Pop
//Description:			Pop the element from top of the stack
//InputParameters:	 	PPNODE
//return: 				int
//-----------------------------------------------

int Peep(PNODE);
//-----------------------------------------------
//Function Name: 		Peep
//Description:			Returns the element on top of the stack without physically deleting
//InputParameters:	 	PPNODE
//return: 				int
//-----------------------------------------------

void Display(PNODE);
//-----------------------------------------------
//Function Name: 		Display
//Description:			Display the elements of the stack
//InputParameters:	 	PPNODE
//return: 				void
//-----------------------------------------------

int Count(PNODE);
//-----------------------------------------------
//Function Name: 		Count
//Description:			Count the elements of the stack
//InputParameters:	 	PPNODE
//return: 				int
//-----------------------------------------------