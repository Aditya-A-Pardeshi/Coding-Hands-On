//Binary Serach Tree
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
};

typedef int BOOL;
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Root, int value)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	newn->data = value;
	newn->rchild = NULL;
	newn->lchild = NULL;
	
	if(*Root == NULL)
	{
		*Root = newn;
	}
	
	else
	{
		temp = *Root;
		while(1)
		{
			if(temp->data == value)
			{
				printf("Element already present\n");
				free(newn);
				break;
			}
			if(value < temp->data)
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp=temp->lchild;
			}
			else if(value > temp->data)
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}//end of else
		}//end of while
	}//end of else
}//end of function

BOOL Search(PNODE Root, int value)
{
	while(Root != NULL)
	{
		if(Root->data == value)
		{
			break;
		}
		if(value < Root->data)
		{
			Root = Root->lchild;
		}
		else
		{
			Root = Root->rchild;
		}
	}
	if(Root == NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

void Inorder(PNODE Root)		//DLR
{
	if(Root != NULL)
	{
		Inorder(Root->lchild);
		printf("%d\t",Root->data);
		Inorder(Root->rchild);
	}
}

void Preorder(PNODE Root)		//DLR
{
	if(Root != NULL)
	{
		printf("%d\t",Root->data);
		Inorder(Root->lchild);
		Inorder(Root->rchild);
	}
}

void Postorder(PNODE Root)		//LRD
{
	if(Root != NULL)
	{
		Inorder(Root->lchild);
		Inorder(Root->rchild);
		printf("%d\t",Root->data);
	}
}

int main()
{
	PNODE First = NULL;
	int choice = 1;
	int no = 0;
	BOOL bRet = FALSE;
	
	while(choice != 0)
	{
		printf("Enter your choice:\n");
		printf("1. Insert into BST\n");
		printf("2. Search element in BST\n");
		printf("3. Inorder display\n");
		printf("4. Preorder display\n");
		printf("5. Postorder display\n");
		printf("0. Exit the application\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number:\n");
				scanf("%d",&no);
				Insert(&First,no);
				break;
			
			case 2:
				printf("Enter search element\n");
				scanf("%d",&no);
				bRet = Search(First,no);
				if(bRet == TRUE)
				{
					printf("Element found\n");
				}
				else
				{
					printf("Element not found\n");
				}
				break;
				
			case 3:
				Inorder(First);
				break;
				
			case 4:
				Preorder(First);
				break;
				
			case 5:
				Postorder(First);
				break;
			
			case 0:
				printf("Thank you for using the application\n");
				break;
				
			default:
				printf("Wrong choice\n");
		}
	}
	
	return 0;
}

