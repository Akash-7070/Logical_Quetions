/*
 ============================================================================
 Name        : c_StructureCricket.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct DOB
{
	int day;
	int month;
	int year;
};

struct cricket
{
	char player_name[20];
	int jersy_number;
	char team_name[10];
    struct DOB Birth;
};

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int i, num;

	printf("Enter Number Of Players:");
	scanf("%d",&num);

	struct cricket p1[num];


	printf("\nEnter Player Information:\n");

	for(i=0; i<num; i++)
		{
	      printf("\nEnter player %d name:",i+1);
	      scanf("%s",p1[i].player_name);

	      printf("\nPlayer Date of Birth:");
	      scanf("%d %d %d",&p1[i].Birth.day, &p1[i].Birth.month,&p1[i].Birth.year);

	      printf("\nEnter Jersy number:");
	      scanf("%d",&p1[i].jersy_number);

	      printf("\nEnter Team name:");
	      scanf("%s",p1[i].team_name);

		}

	printf("\n\nInformation about Player:\n");

	printf("\n\tName\t   DOB\t\tNumber\tTeam");

	for(i=0; i<num; i++)
	{
		/*
		printf("\nPlayer %d Name: %s",i+1,p1[i].player_name);
		printf("\nPlayer Birth Date: %d-%d-%d",p1[i].Birth.day,p1[i].Birth.month,p1[i].Birth.year);

		printf("\nJersy Number: %d",p1[i].jersy_number);
		printf("\nTeam Name: %s",p1[i].team_name);

		printf("\n");
		*/
		printf("\n\t%s \t%d-%d-%d\t%d\t%s",p1[i].player_name,p1[i].Birth.day,p1[i].Birth.month,p1[i].Birth.year,p1[i].jersy_number,p1[i].team_name);

	}

	return EXIT_SUCCESS;

}
