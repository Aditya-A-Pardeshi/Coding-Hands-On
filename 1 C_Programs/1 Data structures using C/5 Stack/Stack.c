//Dynamic implementation of stack using linked list

//include header file created for this application
#include"header.h"

int main()			//Entry point function
{
	PNODE First = NULL;
	int iNo = 0;
	int choice = 1;
	printf("-----------------------------------\n");
	printf("Dynamic implementation of stack\n");
	
	while(choice != 0)
	{	
		printf("-----------------------------------\n");
		printf("Enter your choice: \n");
		printf("1: Push the element\n");
		printf("2: Pop the element\n");
		printf("3: Display elements of stack\n");
		printf("4: Count elements\n");
		printf("5: Peep element\n");
		printf("0. Exit the application\n");		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number to push:\n");
				scanf("%d",&iNo);
				Push(&First,iNo);
				break;
				
			case 2:
				iNo = Pop(&First);
				printf("Popped element is %d\n",iNo);
				break;
			
			case 3:
				Display(First);
				break;
			
			case 4:
				printf("Number of elements in stack: %d\n",Count(First));
				break;
				
			case 5:
				printf("Peeped element is %d\n",Peep(First));
				break;
				
			case 0:
				printf("Thank you for using the application");
				break;
			
			default:
				printf("Incorrect choice\n");
		}			//end of switch
	}				//end of while
	return 0;
}					//end of main