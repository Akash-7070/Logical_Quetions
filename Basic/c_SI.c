/*
 ============================================================================
 Name        : c_SI.c
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
	int principle;
	int rate;
	int year;
	float SI;

	printf("Enter the principle:");
	scanf("%d",&principle);

	printf("Enter the rate:");
	scanf("%d",&rate);

	printf("Enter the year:");
	scanf("%d",&year);

	SI=((principle*rate*year)/100);

	printf("Simple Interest:%.f", SI);


	return EXIT_SUCCESS;
}
