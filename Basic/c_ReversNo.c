/*
 ============================================================================
 Name        : c_ReversNo.c
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
	int a,no;
	int reverse=0;

	printf("Enter the number:");
	scanf("%d",&no);

	while(no!=0)
	{
		a=no%10;
		reverse=reverse*10+a;
		no=no/10;
	}

	printf("Factorial of eneterd number is=%d",reverse);
	return EXIT_SUCCESS;
}
