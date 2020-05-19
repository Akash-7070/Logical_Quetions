/*
 ============================================================================
 Name        : c_VowelString.c
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

	int i, j=0;

	char s1[100];
	char s2[100];

	printf("Enter string:");
	gets(s1);

	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='o'||s1[i]=='0'||s1[i]=='u'||s1[i]=='U')
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]='\0';

	printf("\nVowels in the string: ");
	//printf("%s",s2);
	puts(s2);

	return EXIT_SUCCESS;
}
