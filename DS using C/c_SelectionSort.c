/*
 ============================================================================
 Name        : c_SelectionSort.c
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

	int num, i, j, temp, index;

	printf("Enter The Array Size:");
	scanf("\t%d",&num);

	int  a[num];

	printf("\nEnter The Array Element:");

	for(i=0; i<num; i++)
	{
		scanf("%d",& a[i]);
	}



	for(i=0; i<(num-1); i++)
	{
		index=i;

		for(j=i+1; j<num; j++)
		{
			if(a[index] > a[j]) //Ascending Order

			//if(a[index] < a[j]) //Descending Order
			{
				index=j;
			}

			if(index!=i)
			{
				temp=a[i];
				a[i]=a[index];
				a[index]=temp;
			}
		}

	}

	printf("\nAfter Sorting:");

	for(i=0; i<num; i++)
	{
		printf("%d\n",a[i]);
	}

	return EXIT_SUCCESS;
}
