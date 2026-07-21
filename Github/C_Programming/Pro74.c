#include<stdio.h>
void main()
{
	int marks[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter marks:");
		scanf("%d",&marks[i]);
        
	}
	printf("\n--------------\n");
	for(i=0;i<5;i++)
	{
		printf("\n marks = %d",marks[i]);
		
	}
}