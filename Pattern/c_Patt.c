/*
 ============================================================================
 Name        : c_Patt.c
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

	int i, j;

	//for(i=1; i<=5; i++)

	for(i=65; i<=90; i++)
	{
	  //for(j=1; j<=5; j++)

		for(j=65; j<=90; j++)
		{
			//printf("*");
			//printf("%d",i);
			//printf("%d",j);
			printf("%c",i);
			//printf("%c",j);
		}
	 printf("\n");
	}
	return EXIT_SUCCESS;
}
