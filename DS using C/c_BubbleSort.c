/*
 ============================================================================
 Name        : c_BubbleSort.c
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

	int i, j, num, temp;

	printf("Enter the Array Size:");
	scanf("%d", &num);

	int a[num];

	printf("\nBefore Sorting:");
	for(i=0; i<num; i++)
	{
		scanf("%d",& a[i]);
	}

	for(i=0; i<num-1; i++)
	{
		for(j=0; j<num-1; j++)
		{
			if(a[j] > a[j+1]) //Ascending

			//if(a[j] < a[j+1])  //Descending
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("After Sorting:");

	for(i=0; i<num; i++)
	{
		printf("\n%d",a[i]);
	}

	return EXIT_SUCCESS;
}
