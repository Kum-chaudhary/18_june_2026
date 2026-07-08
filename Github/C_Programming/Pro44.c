#include<stdio.h>
void main()
{
  /*11111
  222222
  333333
  444444
  555555*/
	//variable declaration
	int row;
	int col; 
	for(row=1;row<=5;row++)//1 to 5 row
	{
		for(col=1;col<=5;col++)
		{
			printf(" %d ",row);
		}
		printf("\n");
	}
}