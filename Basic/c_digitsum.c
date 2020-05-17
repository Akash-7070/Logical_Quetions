/*
 ============================================================================
 Name        : c_digitsum.c
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
	int no, sum=0;
	int b;

	printf("Enter the no:");
	scanf("%d",&no);

	while(no!=0)
	{
		b=no%10;
		sum=sum+b;
		no=no/10;
	}

	printf("The sum of digits is= %d",sum);

	return EXIT_SUCCESS;
}
