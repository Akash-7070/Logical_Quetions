/*
 ============================================================================
 Name        : c_Armstrong.c
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
    int num1,num2, i,b,sum=0, temp;

	printf("Enter the Number:");
    scanf("%d %d",&num1,&num2);

    for(i=num1;i<=num2;i++)
    {
    	b=i;
     while(i>0)
     {
    	temp=i%10;
    	sum=sum+(temp*temp*temp);
    	i=i/10;
     }


        if(sum==b)
        {
    	printf("%d Number is Armstrong",sum);
       }
    else
    {
    	printf("%d Number is not Armstrong",sum);
    }
    }
	return EXIT_SUCCESS;
}
