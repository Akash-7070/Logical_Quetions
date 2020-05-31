/*
 ============================================================================
 Name        : c_Patt_2.c
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

	int i,j;

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=i; j++)
		{
			//printf("*");
			//printf("%d",i);
			printf("%d",j);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
