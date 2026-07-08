/*
1
23
456
78910
*/
#include<stdio.h>
void main()
{
	int row;
	int col;
	int num=1; 
	for(row=1;row<=5;row++)//1 to 5 row
	{
		for(col=1;col<=row;col++) 
		{
			printf(" %d ",num);
			num++;  //column increment 
		}
		printf("\n");
	}
}