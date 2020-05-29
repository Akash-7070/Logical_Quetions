/*
 ============================================================================
 Name        : FindElement.c
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
	int num,i;
	int arr[]={10,20,30,40,50};

    printf("Enter number to be searched");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
	  if(num==arr[i])
	  {
		printf("Present");
		break;
	  }

    }
return 0;
}

