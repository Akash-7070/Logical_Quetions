/*
 ============================================================================
 Name        : c_PositiveNegatvive.c
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

	int num;

	printf("Enter Number:");
	scanf("%d",&num);

	if(num<=0.00)
	{
		if(num==0)
		{
			printf("You Entered Zero: %d", num);
		}
		else
		{
			printf("You Entered Negative: %d",num);
		}
	}
	else
	{
		printf("You Entered Positive: %d", num);
	}
	return EXIT_SUCCESS;
}
