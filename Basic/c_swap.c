/*
 ============================================================================
 Name        : c_swap.c
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
	int b;

	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d", &b);

	printf("before swapping a=%d and b=%d\n",a,b);
/*
	a=a+b;
	b=a-b;
	a=a-b;
*/
	a=a^b;
	b=a^b;
	a=a^b;

	printf("after swapping a=%d and b=%d\n",a,b);

	return EXIT_SUCCESS;
}
