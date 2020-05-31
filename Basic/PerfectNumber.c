/*
 ============================================================================
 Name        : PerfectNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,sum=0,i;
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("%d is perfect no",num);
	}
	else
	{
		printf("%d is not perfect",num);
	}
	return 0;
}

