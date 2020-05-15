/*
 ============================================================================
 Name        : c_evenorodd.c
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
	int a;
	printf("Enter the number:");
	scanf("%d",&a);

	//if(a%2==0)
	if((a/2)*2==a)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}


	/*if(a & 1 ==1)
	{
		printf("Number is odd");
	}
	else
	{
		printf("Number is even");
	}
*/
	return EXIT_SUCCESS;
}
