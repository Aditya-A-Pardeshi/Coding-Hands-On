//Singly circular linked list

//header file created for the application
#include"header.h"

int main()
{
	//variable to hold node data
	int iNo = 0;			
	//variable to hold address of first node
	PNODE First = NULL;		
	//variable to hold address of last node
	PNODE Last = NULL;		
	//variable to hold insert or delete position
	int iPos = 0;			
	//variable to hold user choice
	int choice = 1;
	
	printf("=============================================\n");
	printf("Singly Circular Linked List Program\n");
	printf("=============================================\n");
	while(choice)
	{
		printf("Enter your choice\n");
		printf("1: Insert First\n");
		printf("2: Insert Last\n");
		printf("3: Insert at position\n");
		printf("4: Delete First\n");
		printf("5: Delete Last\n");
		printf("6: Delete at position\n");
		printf("7: Display\n");
		printf("8: Count elements\n");
		printf("0: Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number:\n");
				scanf("%d",&iNo);
				InsertFirst(&First,&Last,iNo);
				break;
				
			case 2:
				printf("Enter number:\n");
				scanf("%d",&iNo);
				InsertLast(&First,&Last,iNo);
				break;
				
			case 3:
				printf("Enter number:\n");
				scanf("%d",&iNo);
				printf("Enter insert position:\n");
				scanf("%d",&iPos);
				InsertAtPos(&First,&Last,iNo,iPos);
				break;
				
			case 4:
				DeleteFirst(&First,&Last);
				break;
				
			case 5:
				DeleteLast(&First,&Last);
				break;
				
			case 6:
				printf("Enter delete position:\n");
				scanf("%d",&iPos);
				DeleteAtPos(&First,&Last,iPos);
				break;
			
			case 7:
				Display(First,Last);
				break;
				
			case 8:
				printf("Number of elements in linked list are %d\n",Count(First,Last));
				break;
				
			case 0:
				printf("Thank you for using the application");
				break;
				
			default:
				printf("Incorrect choice\n");
		}	//end of switch
	}		//end of while
	return 0;
}