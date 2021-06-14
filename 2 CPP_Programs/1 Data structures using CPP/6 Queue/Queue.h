//header file for Queue application
//include header file for input output
#include<iostream>
using namespace std;
namespace Nqueue
{
//declaration of structure for node
struct node
{
	int data;
	struct node *next;
};

//typedefs for datatype 
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//class declaration
class Queue
{
	private:
		PNODE Head;
		int iSize;
	public:
		Queue();
		void Enqueue(int);
		void Dequeue();
		void Display();
		int Count();
};	//end of class declaration
}