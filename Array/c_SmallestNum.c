/*
 ============================================================================
 Name        : c_BiggestNum.c
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
	int a[10], i;
	int Small;

	printf("Enter the Number:");

	for(i=0;i<10;i++)
	{
		scanf("%d",& a[i]);
	}

	for(i=0;i<10;i++)
	{
		if(a[i]<Small)
		{
			Small=a[i];
		}
	}

	printf("Small number is %d",Small);

	return EXIT_SUCCESS;
}
