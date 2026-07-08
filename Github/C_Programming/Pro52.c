#include<stdio.h>
void main()
{
	int row,col;
	int num=65;
	
	for(row=5;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf(" %c ",num);
			num++;
		}
		printf("\n");
	}
}