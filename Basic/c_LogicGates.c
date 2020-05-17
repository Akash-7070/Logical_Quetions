/*
 ============================================================================
 Name        : c_LogicGates.c
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

	int A, B, temp, i;

	printf("AND :   A     B     Output ");
	//printf("OR  :   A     B     Output ");
	//printf("X-OR:   A     B     Output ");

	printf("\n\n");

	for(i=0; i<4; i++)
	{
		temp=i;
		A=temp%2;
		temp=temp/2;
		B=temp%2;

		printf("\t%d     %d       %d",A,B, A&&B);
		//printf("\t%d     %d       %d",A,B, A||B);
		//printf("\t%d     %d       %d",A,B, A^B);

		printf("\n");
	}
	return EXIT_SUCCESS;
}
