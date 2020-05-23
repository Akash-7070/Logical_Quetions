
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,num,sum=0,temp;
	printf("Enter Number: \n");
	scanf("%d",&num);

	temp=num;

	while (num>0)
	{
		int fact=1;
		int a=num%10;

	    for(i=1;i<=a;i++)
	    {
		fact=fact*i;
	    }
		sum=sum+fact;

		num=num/10;
	}

	if(temp==sum)
	{
		printf("Number is strong");
	}
	else
	{
		printf("Number is Not strong");
	}

	return 0;
}
