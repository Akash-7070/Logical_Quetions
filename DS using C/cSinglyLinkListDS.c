/*
 ============================================================================
 Name        : cSinglyLinkListDS.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}NODE;

int value;
NODE *head=NULL;

void display();
NODE* createnode(int value);
void addfirst(int value);
void addlast(int value);
int delfirst();
//int dellast();

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int choice;

			printf("1- Addfirst\n");
			printf("2- Addlast\n");
			printf("3- Delfirst\n");
			printf("4- Dellast\n");
			printf("5- Display List\n");
			printf("0- Exit\n");

	do
	{
		printf("\nEnter choice:");
		scanf("%d",&choice);

		switch(choice)
		{

		case 1://addfirst
			   printf("Enter Element to Add:");
			   scanf("%d",&value);
			   addfirst(value);
			   break;

		case 2://addlast
			   printf("Enter Element to Add:");
			   scanf("%d",&value);
			   addlast(value);
			   break;

		case 3://delfirst
			   delfirst();
			   break;
/*
		case 4://dellast
			   dellast();
			   break;
*/
		case 5://display
			   display();
			   break;

		case 0: printf("exit");

		}
	}while(choice!=0);
	return EXIT_SUCCESS;
}

NODE* createnode(int value)
{
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void addfirst(int value)
{
	NODE *newnode;
	newnode=createnode(value);

	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}

void addlast(int value)
{
	NODE *newnode, *trav;
	newnode=createnode(value);

	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		trav=head;

		while(trav->next!=NULL)
		{
			trav=trav->next;
		}

		trav->next=newnode;
	}
}

void display()
{
	NODE *trav;
	trav=head;

	printf("\nFollowing is List:\n");

	while(trav!=NULL)
	{
		printf("%d is ",trav->value);
		trav=trav->next;
	}

	printf("\n");


}

int delfirst()
{
	NODE *trav;

}
