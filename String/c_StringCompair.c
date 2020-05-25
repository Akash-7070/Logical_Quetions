/*
 ============================================================================
 Name        : c_CompairString.c
 Author      : Akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);

	int i=0, flag=0, len1, len2;

	char s1[100];
	char s2[100];

	printf("Enter First string:");
	gets(s1);

	printf("\nEnter Second String:");
	gets(s2);

	len1= strlen(s1);
	len2= strlen(s2);

	while(i<len1 && i<len2)
	{
		if(s1[i]==s2[i])
		{
			i++;
			continue;
		}
		if(s1[i] < s2[i])
		{
			flag=1;
			break;
		}
		if(s1[i] > s2[i])
		{
			flag=2;
			break;
		}
	}

	if(flag==0)
	{
		printf("\nBoth String Are Equal");
	}

	if(flag==1)
		{
			printf("\nString 1 is less than String 2");
		}

	if(flag==2)
		{
		printf("\nString 1 is greter than String 2");
		}

	return EXIT_SUCCESS;
}
