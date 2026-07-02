#include<stdio.h>
void main()
{
	int age;
	
	printf("enter age:");
	scanf("%d",&age);
	
	if(age > 18)
	{
		printf("eligible for voting");
	}
	else 
	{
		printf("eligible for not voting");
	}
}