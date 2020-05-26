/*
 ============================================================================
 Name        : StringConcat.c
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
  int i,m1,m2,a=0;
  char str[15]="ganesh";
  char str1[]="akash";

  m1=strlen(str);
  m2=strlen(str1);

  for(i=0;i<m2;i++)
  {
	str[m1++]=str1[i];
  }

  str[m1]='\0';

  printf("%s",str);

  return 0;
}
