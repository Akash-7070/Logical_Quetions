/*
 ============================================================================
 Name        : c_loop.c
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

	int Number, a,sum=0;

	printf("Enter how many numberw you want:");
	scanf("%d", &Number);

	for(a=0; a<=Number; a++)
	{
		sum=sum+a;
	}
	printf("Sum of numbers is=%d",sum);

	return EXIT_SUCCESS;
}
