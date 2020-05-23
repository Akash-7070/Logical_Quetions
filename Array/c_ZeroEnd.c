/*
 ============================================================================
 Name        : c_ZeroEnd.c
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

	int i, count=0, num;

	printf ("Enter Array Size:");
	scanf("%d",&num);

	int a[num];

	printf("\nEnter Array Element:");

	for(i=0; i<num; i++)
	{
		scanf("%d",& a[i]);
	}

	for(i=0; i<num; i++)
	{
		if(a[i] > 0)
		{
			a[count++]=a[i];
		}
	}

	while(count<num)
	{
		a[count++]=0;
	}

	for(i=0; i<num; i++)
	{
		printf("%d\n",a[i]);
	}
	return EXIT_SUCCESS;
}
