/*
 ============================================================================
 Name        : c_StackDS.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top=-1;

void push(int);
void pop();
int isfull();
int isempty();
int peek();
void display();

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int choice;
	int num;

    printf("1.push \n");
    printf("2.pop \n");
    printf("3.peek \n");
    printf("4.display \n");
    printf("0.quit \n");

    do
    {
    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    	case 1://push
    		  if(isfull())
    		  {
    			  printf("Stack is Full");
    		  }
    		  else
    		  {
    			  printf("Enter value:");
    			  scanf("%d",&num);

    			  push(num);

    			  printf("%d is pushed",num);
    		  }
    		  break;
    	case 2://pop
    		 if(isempty())
    		 {
    			 printf("Stack is Empty");
    		 }
    		 else
    		 {
    			 num=peek();
    			 pop();
    			 printf("%d is poped",num);
    		 }
    		 break;
    	case 3://peek
    		  peek();
    		  printf("%d is peeked element",num);
              break;

    	case 4://display
    		display();
    		break;
    }
   }while(choice!=0);
    return 0;
}

void push(int num)
{
	top++;
	stack[top]=num;
}

void pop()
{
	stack[top]=-1;
	top--;
}
int peek()
{
	return stack[top];
}

int isfull()
{
	if(top==SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
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
	printf("\nStack Element:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%d\n",stack[i]);
	}
}







