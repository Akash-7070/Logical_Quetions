/*
 ============================================================================
 Name        : c_QueueDS.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define size 5
int queue[size];

int rear=-1;
int front=-1;

void push(int);
void pop();
int isfull();
int isempty();
int peek();
void display();

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int choice, num;

		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("0.exit\n\n");

	do
	{
		printf("\nEnter Choice:");
		scanf("%d",&choice);

		switch(choice)
			{
				case 1://push
					  if(isfull())
					  {
						  printf("Queue is Full");
					  }
					  else
					  {
						  printf("Enter Number: ");
						  scanf("%d",&num);
						  push(num);
						  printf("%d is pushed",num);
					  }break;

				case 2://pop
					  if(isempty())
					  {
						  printf("Queue is Empty");
					  }
					  else
					  {
						  num=peek();
						  pop();
						  printf("%d is popped element",num);
					  }break;

				case 3://peek
					  num=peek();
					  printf("%d is Top element",num);
					  break;

				case 4://display
					  display();
					  break;

				case 0:	printf("Exit");
				      break;
			}
	}while(choice!=0);

	return EXIT_SUCCESS;
}

void push(int num)
{
	rear++;
	queue[rear]=num;
}

void pop()
{
	front++;
	queue[front]=-1;
}

int peek()
{
	return queue[rear];
}

int isempty()
{
	if(rear==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull()
{
	if(rear==size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display()
{
	int i;
	printf("Queue Elements:\n");

	for(i=0; i<size; i++)
	{
		printf("%d\n",queue[i]);
	}

}
