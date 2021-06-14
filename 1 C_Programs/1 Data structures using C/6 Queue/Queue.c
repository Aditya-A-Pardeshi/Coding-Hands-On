//Implementation of Queue
//include header file created for this application
#include"header.h"

//entry point function
int main()
{
	//Variable to hold address of first node
	PNODE First = NULL;
	//Variable to hold data of node
	int iNo = 0;
	//Variable to hold user choice
	int choice = 1;
	
	printf("--------------------------------------------\n");
	printf("Implementation of Queue application\n");
	printf("--------------------------------------------\n");
	
	while(choice != 0)
	{
		printf("Enter choice: \n");
		printf("1. Add element to the queue\n");
		printf("2. Remove element from queue\n");
		printf("3. Display the queue elements\n");
		printf("4. Count queue elements\n");
		printf("0. Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number\n");
				scanf("%d",&iNo);
				EnQueue(&First,iNo);
				break;
				
			case 2:
				DeQueue(&First);
				break;
				
			case 3:
				Display(First);
				break;
				
			case 4:
				printf("Number of elements in queue are %d\n",Count(First));
				break;
				
			case 0:
				printf("Thank you for using the application\n");
				break;
				
			default:
				printf("Wrong choice\n");
		}		//end of switch
	}			//end of while

	return 0;
}