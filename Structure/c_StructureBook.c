/*
 ============================================================================
 Name        : c_StructureBook.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct book
{
	char name[50];
	int price;
};

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int num=3, i;
	struct book b[num];

    for(i=0; i<num; i++)
    {
    	printf("\nEnter book name:");
    	scanf("%s",&b[i].name);

    	printf("\nEnter price:");
    	scanf("%d",&b[i].price);

    }

    printf("\nBook Information:\n");

    for(i=0; i<num; i++)
    {
    	printf("\nBook number %d Name: %s",i+1, b[i].name);

    	printf("\nBook price: %d",b[i].price);

    	printf("\n");
    }
	return EXIT_SUCCESS;
}
