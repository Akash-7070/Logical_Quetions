/*
 ============================================================================
 Name        : c_NextNo.c
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
	int num,i;

	printf("Enter Number:");
	scanf("%d",&num);

	printf("%d\n",num);

	for(i=0;i<5;i++)
	{
	   num++;
	   printf("%5d",num);

	}
	return EXIT_SUCCESS;
}
