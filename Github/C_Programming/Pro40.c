#include<stdio.h>
void main()
{
	
	// Positive or Nagative value
	int num;
	int row;
	
     for(row=1;row<=5;row++)
     {
     	printf("\n Enter the number:");
     	scanf("%d",&num);
     	
     	if(num>0)
     	{
     		printf("\n %d positive",num);
		}
		else
		{
		 	printf("\n \t %d Nagative",num);
		}
	 }
}