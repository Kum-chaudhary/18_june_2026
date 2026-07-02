#include<stdio.h>
void main()
{
	int num;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	if(num > 50)
	{
		printf("number is above 50");
	}
	else
	{
		printf("number is below 50");
	}
}