/*
 ============================================================================
 Name        : c_palindrome.c
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
	int num, a,sum=0,temp;

	printf ("Enter the Number:");
	scanf("%d",&num);

	temp=num;

	while(num>0)
	{
		a=num%10;
		sum=sum*10+a;
		num=num/10;
	}

	num=temp;

	if(sum==num)
	{
		printf("%d Number is Palindrome",sum);
	}

	else
	{
		printf("%d Number is Not Palindrome",sum);
	}
	return EXIT_SUCCESS;
}
