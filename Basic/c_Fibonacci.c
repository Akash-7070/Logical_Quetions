/*
 ============================================================================
 Name        : c_Fibonacci.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int a=0, b=1, c;
	int num, i;

	printf ("Enter the number:");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		printf("%d ",a);

		c=a+b;
		a=b;
		b=c;

	}
	return EXIT_SUCCESS;
}
