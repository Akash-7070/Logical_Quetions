/*
 ============================================================================
 Name        : CharSearch.c
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
    int i,m,j=0;
    char str[]="Akash AND Ganesh";

    char a='n';
    m=strlen(str);

    for(i=0;i<m;i++)
	{
		if(a!=str[i])
        {
		   str[j++]=str[i];
	    }

	}

    str[j]='\0';
	printf("%s",str);

	return 0;
}


