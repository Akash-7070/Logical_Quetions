/*
 ============================================================================
 Name        : c_grade.c
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
	int marks;

	printf("Enter the marks:");
	scanf("%d", &marks);

	if(marks>=75)
	{
		printf("Grade A");
	}
	else if(marks>=55)
	{
		printf("Grade B");
	}
	else if(marks>=35)
	{
		printf("Grade C");
	}
	else
	{
		printf("Fail");
	}
	return EXIT_SUCCESS;
}
