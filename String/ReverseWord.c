/*
 ============================================================================
 Name        : ReverseWord.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,m,j,a=0;
	char str1[25];

	char str[]="Akash Ganesh Toppers";
	m=strlen(str);


	for(i=0;i<=m;i++)
	{

		if(str[i]==' ' || str[i]=='\0')
		{
			for(j=i-1;j>=0;j--)
			{
				str1[a++]=str[j];
			}

			printf("\n%s",str1);
			a=0;
		 }
	 }

	return EXIT_SUCCESS;
}
