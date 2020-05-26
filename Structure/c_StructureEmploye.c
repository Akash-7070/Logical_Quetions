/*
 ============================================================================
 Name        : c_StructureEmploye.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Employe
{
	char name[50];
	char company[50];
	int salary;
};

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	struct Employe e1;
	struct Employe *ptr= &e1;

	printf("\nSize of Struct e1: %d",sizeof(e1));

	printf("\nEnter Employe Name:");
	//scanf("%s",& e1.name);
	//scanf("%s",& ptr->name);
	gets(ptr->name);

	printf("\nEnter Company Name:");
	//scanf("%s",& e1.company);
	//scanf("%s",& ptr->company);
    gets(ptr->company);

	printf("\nEnter Employe Salary:");
	//scanf("%d",& e1.salary);
	scanf("%d",& ptr->salary);

	printf("\n\nEmployment Information:\n");

	//printf("\nName of Employe:\n%s",e1.name);
	printf("\nName of Employe:\n%s",ptr->name);

	//printf("\nName of Company:\n%s",e1.company);
	printf("\nName of Company:\n%s",ptr->company);

	//printf("\nSalary of Employe:\n%d",e1.salary);
	printf("\nSalary of Employe:\n%d",ptr->salary);

	return EXIT_SUCCESS;
}
