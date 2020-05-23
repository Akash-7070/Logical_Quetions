/*
 ============================================================================
 Name        : recursion_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int a);
int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int num,b;
	printf("Enter Number:");
	scanf("%d",&num);

	b=sum(num);
	printf("\nSum of Digits is %d",b);
	return EXIT_SUCCESS;
}

int sum(int a)
{
	int static res;
	int temp;

	if(a>0)
	{
		temp=a%10;
        res+=temp;
		a=a/10;
		sum(a);
	}
  return res;
  // printf("%d",res);
}
