#include<stdio.h>
void main()
{
	
	// Even or Odd number
	int num;
	int row;
	
     for(row=1;row<=5;row++)
     {
     	printf("\n Enter the number:");
     	scanf("%d",&num);
     	
     	if(num%2==0)
     	{
     		printf("\n %d Even",num);
		}
		else
		{
		 	printf("\n \t %d Odd",num);
		}
	 }
}