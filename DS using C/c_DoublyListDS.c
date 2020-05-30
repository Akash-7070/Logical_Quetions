/*
 ============================================================================
 Name        : c_DoublyListDS.c
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
	int val;
	struct node *prev;
	struct node *next;
}NODE;

NODE *head=NULL;
int val, position;

NODE* creatnode(int val);
void addfirst(int val);
void addlast(int val);
int delfirst();
int dellast();
void addatposition(int val,int position);
void displaylist();

int main(void)
{

	setvbuf(stdout,NULL,_IONBF,0);

	int choice;

	printf("1-Addfirst\n");
	printf("2-Addlast\n"); //dought
	printf("3-Display list\n");
	printf("4-Del first\n");
	printf("5-Del last\n");
	printf("6-Add at position\n");
	printf("0-Exit");

	do
	{
		printf("\nEnter Choice:");
		scanf("%d",&choice);

		switch(choice)
		{

		case 1://Add First
			printf("Enter Value:");
			scanf("%d",&val);
			addfirst(val);
			break;

		case 2://Add last
			printf("Enter Value:");
			scanf("%d",&val);
			addlast(val);
			break;

		case 3:
			printf("Display List\n\n");
			displaylist();
			break;

		case 4://del first
              delfirst();
              printf("Deleted Val is %d",val);
              break;

		case 5://del first
	           dellast();
		       printf("Deleted Val is %d",val);
		       break;

		case 6://add at position
			  printf("Enter Value:");
			  scanf("%d",&val);

			  printf("Enter position:");
			  scanf("%d",&position);

			  addatposition(val,position);
			  break;

		case 0:
			printf("Exit");
			break;

		}
	}while(choice!=0);

	return EXIT_SUCCESS;
}

NODE* creatnode(int val)
{
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->val=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}

void addfirst(int val)
{
	NODE *newnode;
	newnode=creatnode(val);

	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}

}

void addlast(int val)
{
	NODE *newnode, *trav;
	newnode=creatnode(val);

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
		newnode->prev=trav;
	}
}

void displaylist()
{
	NODE *trav, *tail;
	trav=head;

	if(head==NULL)
	{
		printf("List is Empty");
		return;
	}

	printf("Forward Direction:\n");

	while(trav!=NULL)
	{
		printf("%d====",trav->val);
		trav=trav->next;
	}

	tail=head;

	printf("\n");
	printf("\nReverse Direction:\n");

	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	while(tail!=NULL)
	{
		printf("%d====",tail->val);
		tail=tail->prev;
	}
}

int delfirst()
{
	NODE *temp;
	temp=head;

	if(head==NULL)
	{
		printf("List is Empty");
		return 0;
	}
	else
	{
		val=head->val;
		temp=head;
		head=head->next;
		//head->prev=NULL;

		if(head!=NULL)
		{
			head->prev=NULL;
		}

		free(temp);
		temp=NULL;

		return val;

	}
}

int dellast()
{
	NODE *temp, *trav;
	trav=head;

	if(head==NULL)
	{
		printf("List is Empty");
		return 0;
	}
	else
	{
	      while(trav->next!=NULL)
	      {
	    	  trav=trav->next;
	      }

	      val=trav->val;
	      temp=trav;
	      trav=trav->prev;
	      trav->next=NULL;

	      free(temp);
	      temp=NULL;
	      return val;

	}
}

void addatposition(int val,int position)
{
	int i;
	NODE *newnode, *trav;
	newnode=creatnode(val);

	if(head==NULL || position<=1)
	{
		addfirst(val);
	}
	else
	{
		trav=head;

		for(i=0; i<position-1; i++)
		{
			trav=trav->next;

			if(trav==NULL)
			{
				printf("Invalid Position:");
			}
		}
        newnode->prev=trav;
        newnode->next=trav->next;
        trav->next=newnode;
        trav->next->prev=newnode;

	}

}

