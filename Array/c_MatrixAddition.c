/*
 ============================================================================
 Name        : c_MatrixAddition.c
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

	int i, j, row, colum;

	printf("Enter rows:");
	scanf("%d",&row);

	printf("\nEnter colume:");
	scanf("%d",&colum);

	int M1 [row][colum];
	int M2 [row][colum];
	int Add [row] [colum];

	printf("\nFirst Matrix Element:");

	for(i=0; i<row; i++)
	{
		for(j=0; j<colum; j++)
		{
			scanf("%d",&M1 [i][j]);
		}
	}

	printf("\nSecond Matrix Element:");

		for(i=0; i<row; i++)
		{
			for(j=0; j<colum; j++)
			{
				scanf("%d",&M2 [i][j]);
			}
		}

		for(i=0; i<row; i++)
			{
				for(j=0; j<colum; j++)
				{
			       Add[i][j]= M1[i][j] +  M2[i][j];

			     //  Add[i][j]= M1[i][j] -  M2[i][j];
				}
			}

		printf("\nAddtion of Matrix:\n");

		for(i=0; i<row; i++)
				{
					for(j=0; j<colum; j++)
					{
						printf("%d\t", Add[i][j]);
					}

					printf("\n");
				}

	return EXIT_SUCCESS;
}
