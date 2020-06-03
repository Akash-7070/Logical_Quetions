/*
 ============================================================================
 Name        : app_struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

enum department {HR=1,DEVLOPER,TESTING};

typedef struct pIF
{
	int day,month,year;
	char city[20];
}PIF;
typedef struct emp
{
	enum department d;
	PIF s;
	int empid;
	char name[20];
	float sal;
	float netsal;
}EMP;

int getid();
void getnetsal(EMP *p);
void display(EMP a[],int num);
void sortonsal(EMP a[],int num);
void sortonname(EMP a[],int num);
void getdepartment(EMP *p);

const float TDS=0.10f;
static char str[]="CapGemini";

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int i,n;

	printf("Enter the Details of Employee:\n");
	printf("\nChose Department");
	printf("\n1= HR");
	printf("\n2= DEVLOPER");
	printf("\n3= TESTING");
	printf("\n\nEnter Number Of Employee:");
	scanf("%d",&n);

	EMP a[n];

	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of employee:");
		scanf("%s",a[i].name);

		printf("\nEnter the salary of employee:");
		scanf("%f",&a[i].sal);

		printf("\nEnter the City of employee:");
		scanf("%s",a[i].s.city);

		printf("\nEnter the Date of Birth :");
		scanf("%d %d %d",&a[i].s.day,&a[i].s.month,&a[i].s.year);

		getdepartment(&a[i]);

		getnetsal(&a[i]);
		a[i].empid=getid();
	}
	printf("\nBefore Sorting:\n");
	display(a,n);
	printf("==============================");
	sortonsal(a,n);
	printf("\nSorting on Bases of Salary:\n");
	display(a,n);
	printf("==============================");
	printf("\nSorting on the bases of Name:\n");
	sortonname(a,n);
	display(a,n);
	//display(&a);
/*
	for(i=0;i<num;i++)
	{

		printf("\nCompany Name= %s\nEmploye ID=%d\nEmploye Name=%2s\nSalary=%2f\n netsalary=%f ",str,a[i].empid,a[i].name,a[i].sal,a[i].netsal);
		printf("\n\n");
	}*/
	return EXIT_SUCCESS;
}

int getid()
{
	static int c=99;
	return ++c;
}

void getnetsal(EMP *p)
{
	p->netsal= p->sal-((p->sal)*TDS);
}

void display(EMP a[],int num)
{
	int i;

    for(i=0;i<num;i++)
    {
		printf("\nCompany Name= %s\nDepartment Name=%d\nEmploye ID=%d\nEmploye Name=%s\nDOB=%d-%d-%d\nCity=%s\nSalary=%2f\nnetsalary=%2f ",str,a[i].d,a[i].empid,a[i].name,a[i].s.day,a[i].s.month,a[i].s.year,a[i].s.city,a[i].sal,a[i].netsal);
		printf("\n\n");
	}

}
/*
void display(EMP *p)
{
	int i;
	for(i=0;i<num;i++)
	printf("\nCompany Name= %s\nEmploye ID=%d\nEmploye Name=%2s\nSalary=%2f\nnetsalary=%f ",str,p->empid,p->name,p->sal,p->netsal);
	printf("\n\n");
	p++;
	i++;
}
*/
void sortonsal(EMP a[],int num)
{
	EMP t;
	int i,j;

	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i].sal>a[j].sal)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

}

void sortonname(EMP a[],int num)
{
	EMP t;
	int i,j;

	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strcmp(a[i].name,a[j].name)>0)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

void getdepartment(EMP *p)
{
	int choice;
	printf("\nEnter choice for Department:");
	scanf("%d",&choice);

			switch(choice)
			{
			case 1:p->d=HR;

			       break;

			case 2:p->d=DEVLOPER;
				   break;

			case 3:p->d=TESTING;
				   break;

			case 4:printf("Invalid Choice");
			}
}
