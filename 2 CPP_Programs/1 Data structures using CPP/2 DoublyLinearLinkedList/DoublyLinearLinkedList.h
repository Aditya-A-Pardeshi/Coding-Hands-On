//header file for the doubly linear linked list application
//include header file for input output
#include<iostream>
using namespace std;

namespace DLLL
{
//structure decalartion for linked list node
struct node
{
	int data;
	struct node *next;
	struct node *prev;	
};

//typedefs for datatype simplification
typedef struct node NODE;
typedef struct node* PNODE;


//class declaration
class DoublyLinearLinkedList
{
private:
	PNODE Head;
	int iSize;
	
public:	
	//Constructor	
	DoublyLinearLinkedList();			
	void Display();
	int Count();
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
};	//end of class declaration
}
