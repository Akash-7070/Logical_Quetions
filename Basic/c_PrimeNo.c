/*
 ============================================================================
 Name        : c_PrimeNo.c
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
	int num1,num2,i,j;
	int count=0;

	printf("Enter the first number:");
	scanf("%d",&num1);


	printf("Enter the second number:");
	scanf("%d",&num2);

	for(i=num1; i<=num2; i++)
	{
		count=0;
		for(j=1; j<=i; j++)
		{
		if(i%j==0)
		{
			count++;
		}

	}

		if(count==2)
			{
				printf("%d\n",i);
			}
	}

	return EXIT_SUCCESS;
}
