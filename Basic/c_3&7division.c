/*
 ============================================================================
 Name        : c_3&7division.c
 Author      : 
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

	printf("Enter the Number:");
	scanf("%d",&num);

	if((num%3==0)&&(num%7==0))
	{
		printf("Number is divisible by both");
	}
	else if(num%3==0)
	{
		printf("Number is divisible by 3");
	}
	else if(num%7==0)
	{
		printf("Number is divisible by 7");
	}
	else
	{
		printf("Number is not divisible by both of them");
	}
	return EXIT_SUCCESS;
}

