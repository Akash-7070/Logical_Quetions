/*
 ============================================================================
 Name        : c_InsertionSort.c
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

    int i, j,num, temp;

    printf("\nEnter the Array Size:");
    scanf("%d",&num);

    int a[num];

    printf("\nEnter Array Element:");

    for (i=0; i<num; i++)
    {
    	scanf("%d",& a[i]);
    }

    printf("\nBefore Sorting:");

       for(i=0; i<num; i++)
       {
       	printf("%d\n",a[i]);
       }

    for(i=1; i<num; i++)
    {
    	temp=a[i];

    	j=i-1;

    	while(j>=0 && a[j] > temp)
    	{
    		a[j+1]=a[j];
    		j=j-1;
    	}

    	a[j+1]=temp;
    }

    printf("\n\nAfter Sorting:");

    for(i=0; i<num; i++)
    {
    	printf("%d\n",a[i]);
    }
	return EXIT_SUCCESS;
}
