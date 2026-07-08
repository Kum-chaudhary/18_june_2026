#include<stdio.h>
void main()
{
	int start,end;
	int row;
	
	printf("Enter the starting point:");
	scanf("%d",&start);
	printf("Enter the ending point:");
	scanf("%d",&end);
	
	for(row=start;row<=end;row++)
	{
		printf("%d",row);
	}
	
}