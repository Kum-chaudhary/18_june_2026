/*
1
22
333
4444
55555
*/
#include<stdio.h>
void main()
{
	int row;
	int col; 
	for(row=1;row<=5;row++)//1 to 5 row
	{
		for(col=1;col<=row;col++) 
		{
			printf(" %d ",row);
		}
		printf("\n");
	}
}