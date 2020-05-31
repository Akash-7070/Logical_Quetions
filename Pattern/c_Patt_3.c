/*
 ============================================================================
 Name        : c_Patt_3.c
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

	//for(i=1; i<=5; i++)

	for(i=5; i>=1; i--)
	{
		//for(j=5; j>=i; j--)

		for(j=1; j<=i; j++)
		{
			//printf("*");
			printf("%d",i);
			//printf("%d",j);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
