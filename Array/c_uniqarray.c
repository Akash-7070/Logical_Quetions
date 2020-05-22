/*
 ============================================================================
 Name        : c_uniqarray.c
 Author      : 
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
	int i,j,k,n=3;

	int a[3]={4,5,4};

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}


	return EXIT_SUCCESS;
}
