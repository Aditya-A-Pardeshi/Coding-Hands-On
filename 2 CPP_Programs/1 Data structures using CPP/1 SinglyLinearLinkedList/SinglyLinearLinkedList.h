//header file for Singly Linear Linked List Application
//header file for input output
#include<iostream>		
using namespace std;
//user defined namespace
namespace SLLL
{
//defining a new data type for linked list node
struct node				
{
	int data;
	struct node *next;
};

//creating typedefs for simplifying the datatypes
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//class declaration
class SinglyLinearLinkedList		
{
private:
	PNODE Head;
	int iSize;
public:	
	//default constructor
	SinglyLinearLinkedList();
	
	//declaration of class member functions
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int, int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	int Count();
	void Display();	
};
}	//end of namespace