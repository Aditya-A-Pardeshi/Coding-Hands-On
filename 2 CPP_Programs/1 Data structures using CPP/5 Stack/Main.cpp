#include<iostream>
using namespace std;

//structure declaration
struct node
{
	int data;
	struct node *next;
};

//typedef for structure and structure pointer
typedef struct node NODE;
typedef struct node* PNODE;

//clacc declaration
class Stack
{
public:					//access specifier
	PNODE Head;			//characteristic
	
	Stack()				//Default constructor
	{
		Head = NULL;
	}
	
	void Push(int value)
	{
		PNODE newn = NULL;
		//create and initialise new node
		newn = new NODE;		
		newn->data = value;
		newn->next = NULL;
		
		//if stack is empty
		if(Head==NULL)
		{
			Head = newn;
		}
		//if stack has at least one element
		else
		{
			newn->next = Head;
			Head = newn;
		}
	}
	
	int Pop()
	{
		int no = 0;
		//stack is empty
		if(Head == NULL)		
		{
			cout<<"Stack is empty"<<"\n";
			return -1;
		}
		else
		{
			no = Head->data;
			PNODE temp = Head;
			Head = Head -> next;
			//delete is like free in C
			delete temp;		
		}
		return no;
	}
	
	void Display()
	{
		PNODE temp = Head;
		while(temp != NULL)
		{
			cout<<(temp->data)<<" -> ";
			temp = temp->next;
		}
		cout<<"\n";
	}
};

int main()
{
	int choice = 1;
	int no = 0;
	
	//object of stack class
	Stack *obj1 = new Stack;
	
	while(choice != 0)
	{
		cout<<"---------------------------------------\n";
		cout<<"Enter your choice: "<<"\n";
		cout<<"---------------------------------------\n";
		cout<<"1. Push the element"<<"\n";
		cout<<"2. Pop the element"<<"\n";
		cout<<"3. Display the stack elements"<<"\n";
		cout<<"0. Terminate the application!"<<"\n";	
		cout<<"---------------------------------------\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter the element: \n";
				cin>>no;
				obj1->Push(no);
				break;
				
			case 2:
				no = obj1->Pop();
				cout<<"Popped element is "<<no<<"\n";
				break;
			
			case 3:
				obj1->Display();
				break;
				
			case 0:
				cout<<"Thanks for using the application\n";
				break;
			default:
				cout<<"Incorrect choice\n";
			
		}
	}
	
	//delete stack object
	delete obj1;
	
	return 0;
}