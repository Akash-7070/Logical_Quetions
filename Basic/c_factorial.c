/*
 ============================================================================
 Name        : c_factorial.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int e);

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int no;

	printf ("Enter the number:");
	scanf("%d",&no);

	printf("Factorial is= %d", fact(no));
}
int fact(int e)
{
	if(e==0)
	{
		return 1;
	}
	else
	{
		return e*fact(e-1);
	}
/*
	for(a=1; a<=no; a++)
	{
		Factorial*=a;
	}

	printf("Factorial of entered number is= %d",Factorial);
*/
	return EXIT_SUCCESS;
}
