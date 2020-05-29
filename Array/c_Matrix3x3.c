/*
 ============================================================================
 Name        : c_Matrix3x3.c
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

	int i, j, r, c;

	printf("Enter the Rows:");
	scanf("%d",&r);

	printf("\nEnter the colums:");
	scanf("%d",&c);

	int matrix[r][c];

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			 printf("Element - [%d],[%d] : ",i,j);
		     scanf("%d",&matrix[i][j]);
		}
	}

	for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("%d\t", matrix[j][i]);

				//printf("%d\t", matrix[i][j]);
			}

			printf("\n");
		}


	return EXIT_SUCCESS;
}

