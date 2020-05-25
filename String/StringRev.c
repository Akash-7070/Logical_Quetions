/*
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	int m,i,count=0;
	char str[20];

	printf("Enter String:\n");
	gets(str);

			m=strlen(str);
			m=m-1;

			for(i=0;i<m/2;i++)
			{
						if(str[m]==str[i])
						{
							count++;
						}
							m--;
			}

				if((m/2)==count)
				{
					printf("Is Palindrome");
				}
				else
				{
					printf("Not Palindrome");
				}

				return 0;

				}

